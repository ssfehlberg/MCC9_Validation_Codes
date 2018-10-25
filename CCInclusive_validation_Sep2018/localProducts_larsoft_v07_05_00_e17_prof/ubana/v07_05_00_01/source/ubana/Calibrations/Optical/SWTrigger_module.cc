////////////////////////////////////////////////////////////////////////
// Class:       SWTrigger
// Module Type: filter
// File:        SWTrigger_module.cc
//
// Generated at Wed Jun 29 05:46:51 2016 by Kazuhiro Terao using artmod
// from cetpkgsupport v1_10_02.
////////////////////////////////////////////////////////////////////////

#include "art/Framework/Core/EDFilter.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "canvas/Utilities/InputTag.h"
#include "art/Framework/Services/Optional/TFileService.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
#include "ubobj/Trigger/ubdaqSoftwareTriggerData.h"

// C++ libraries
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

// ROOT
#include "TTree.h"
#include "TH1D.h"
#include "TStopwatch.h"

// LArSoft 
#include "larcoreobj/SimpleTypesAndConstants/RawTypes.h"
#include "larcoreobj/SimpleTypesAndConstants/geo_types.h"
//#include "larcore/LArUtilities/TimeService.h"
#include "larcore/CoreUtils/ServiceUtil.h"
#include "lardata/DetectorInfoServices/DetectorClocksService.h"

//Optical Channel Maps
#include "ubcore/Geometry/UBOpChannelTypes.h"
#include "ubcore/Geometry/UBOpReadoutMap.h"

//RawDigits
#include "lardataobj/RawData/raw.h"
#include "lardataobj/RawData/RawDigit.h"
#include "lardataobj/RawData/OpDetWaveform.h"
#include "lardataobj/RecoBase/OpFlash.h"
#include "lardataobj/RawData/TriggerData.h"
#include "lardataobj/RawData/DAQHeader.h"
#include "ubobj/Trigger/UBTriggerTypes.h"
#include "ubobj/Trigger/ubdaqSoftwareTriggerData.h"

// Trigger Emulator Code
#include "SWTriggerBase/SWTriggerTypes.h"
#include "SWTriggerBase/MultiAlgo.h"
#include "SWTriggerBase/ConfigHolder.h"
#include "SWTriggerBase/Result.h"
#include "FEMBeamTrigger/FEMBeamTriggerAlgo.h"

class SWTrigger;

class SWTrigger : public art::EDFilter {
public:
  explicit SWTrigger(fhicl::ParameterSet const & p);
  // The destructor generated by the compiler is fine for classes
  // without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  SWTrigger(SWTrigger const &) = delete;
  SWTrigger(SWTrigger &&) = delete;
  SWTrigger & operator = (SWTrigger const &) = delete;
  SWTrigger & operator = (SWTrigger &&) = delete;

  // Required functions.
  bool filter(art::Event & e) override;


private:

  // Declare member data here.
  void clearVariables();

  trigger::MultiAlgo m_algos; ///< Container of algos

  // Declare member data here.
  std::string fDAQHeaderModule;
  std::string fOpDataModule;
  std::string fOpFlashModule;
  size_t fNChannels;
  size_t fFEMslot;
  size_t fMinReadoutTicks;

  // Beam Window Tree
  TTree* fTwindow;
  int run;
  int subrun;
  int event;
  double event_timestamp_sec;
  double event_timestamp_usec;
  int applied;
  unsigned int trigger_bits;
  float offline_runtime;
  float offline_iotime;
  int bnb;
  int numi;
  int ext;
  TStopwatch _stopwatch;

  // offline outputs
  std::vector< unsigned short > offline_multiplicity;
  std::vector< unsigned short > offline_PHMAX;
  std::vector< unsigned short > offline_trigtick;
  std::vector< double > offline_dttrig;
  std::vector< float > offline_weights;
  std::vector< std::string > offline_algonames;
  std::vector< int > offline_trigpass;
  std::vector< int > offline_algopass;
  std::vector< int > offline_prescalepass;
  std::vector< unsigned short > offline_PHMAX_vect;

  // flash outputs
  std::vector< double > flash_z;
  std::vector< double > flash_y;
  std::vector< double > flash_dz;
  std::vector< double > flash_dy;
  std::vector< double > flash_t;
  std::vector< double > flash_q;

  // offline outputs
  std::vector< unsigned short > online_multiplicity;
  std::vector< unsigned short > online_PHMAX;
  std::vector< unsigned short > online_trigtick;
  std::vector< float > online_weights;
  std::vector< std::string > online_algonames;
  std::vector< int > online_trigpass;
  std::vector< double > online_dttrig;

  std::vector< trigger::Result > m_results;
  
  // records configuration
  TTree* fTconfig;

};


SWTrigger::SWTrigger(fhicl::ParameterSet const & p)
// :
// Initialize member data here.
{
  // Declare handle to analyzer file
  art::ServiceHandle<art::TFileService> out_file;

  // Declare data products.
  produces<raw::ubdaqSoftwareTriggerData>();

  // Load Parameters
  fDAQHeaderModule = p.get<std::string>("DAQHeaderModule");
  fOpDataModule    = p.get<std::string>("OpDataModule");
  fOpFlashModule   = p.get<std::string>("OpFlashModule");
  fNChannels       = p.get<int>("NumberOfChannels");
  fFEMslot         = 0;
  fMinReadoutTicks = p.get<int>("MinReadoutTicks");
  std::vector<std::string> triggertypes = p.get<std::vector<std::string>>("swtrg_algotype");
  std::vector<std::string> triggernames = p.get<std::vector<std::string>>("swtrg_algonames");
  std::vector<unsigned int> triggerbits = p.get<std::vector<unsigned int>>("swtrg_bits");
  //size_t beam_window_size = p.get<size_t>( "swtrg_beam_window_size" );

  fTconfig = out_file->make<TTree>( "femconfig", "FEM emulator config. parameters" );
  std::string instance_name;
  std::string type;
  unsigned int triggerbit;
  trigger::ConfigHolder aconfig;
  std::vector< trigger::ConfigHolder > configs;
  char zinstance_name[50];
  char ztype_name[50];
  fTconfig->Branch( "algoname", zinstance_name, "algoname[50]/C" );
  fTconfig->Branch( "algotype", ztype_name, "algotype[50]/C" );
  fTconfig->Branch( "trigbit", &triggerbit, "trigbit/i" );
  //fTconfig->Branch( "config", &aconfig );

  for (int itrig=0; itrig<(int)triggernames.size(); itrig++) {
    std::string name = triggernames.at(itrig);
    type = triggertypes.at(itrig);
    instance_name = name+"_"+type;
    triggerbit = triggerbits.at(itrig);
    
    fhicl::ParameterSet cfg_ps = p.get<fhicl::ParameterSet>( instance_name );
    m_algos.declareAlgo( triggerbit, type, instance_name );
    auto& cfg = m_algos.GetConfig( instance_name );

    sprintf(zinstance_name, "%s", instance_name.c_str() );
    sprintf(ztype_name, "%s", type.c_str() );
    
    for ( auto const& key : cfg.ListKeys<bool>() )        cfg.Set( key, cfg_ps.get<bool>(key), true );
    for ( auto const& key : cfg.ListKeys<std::string>() ) cfg.Set( key, cfg_ps.get<std::string>(key), true );
    for ( auto const& key : cfg.ListKeys<int>() )         cfg.Set( key, cfg_ps.get<int>(key), true );
    for ( auto const& key : cfg.ListKeys<double>() )      cfg.Set( key, cfg_ps.get<double>(key), true );
    for ( auto const& key : cfg.ListKeys<std::vector<bool> >() )        cfg.Set( key, cfg_ps.get<std::vector<bool> >(key), true );
    for ( auto const& key : cfg.ListKeys<std::vector<std::string> >() ) cfg.Set( key, cfg_ps.get<std::vector<std::string> >(key), true );
    for ( auto const& key : cfg.ListKeys<std::vector<int> >() )         cfg.Set( key, cfg_ps.get<std::vector<int> >(key), true );
    for ( auto const& key : cfg.ListKeys<std::vector<double> >() )      cfg.Set( key, cfg_ps.get<std::vector<double> >(key), true );

    m_algos.GetAlgo( instance_name ).Configure();

    aconfig = cfg; // copy
    
    fTconfig->Fill();
  }// loop over algos
  
  // Setup Output Trees

  // output
  fTwindow = out_file->make<TTree>( "swtrigdata", "SW Trigger Variables" );
  fTwindow->Branch( "run", &run, "run/I" );
  fTwindow->Branch( "subrun", &subrun, "subrun/I" );
  fTwindow->Branch( "event", &event, "event/I" );
  fTwindow->Branch("event_timestamp_sec", &event_timestamp_sec, "event_timestamp_sec/D" );
  fTwindow->Branch("event_timestamp_usec", &event_timestamp_usec, "event_timestamp_usec/D" );
  fTwindow->Branch( "hw_trigger_bits", &trigger_bits, "hw_trigger_bits/i");
  // offline
  fTwindow->Branch( "applied", &applied, "applied/I");
  fTwindow->Branch( "multiplicity", &offline_multiplicity );
  fTwindow->Branch( "PHMAX", &offline_PHMAX );
  fTwindow->Branch( "PHMAX_vect", &offline_PHMAX_vect );
  fTwindow->Branch( "swtrigtick", &offline_trigtick );
  fTwindow->Branch( "weights", &offline_weights );
  fTwindow->Branch( "dttrig", &offline_dttrig );
  fTwindow->Branch( "algonames", &offline_algonames );
  fTwindow->Branch( "swtrigpass", &offline_trigpass );
  fTwindow->Branch( "algopass", &offline_algopass );
  fTwindow->Branch( "prescalepass", &offline_prescalepass );
  fTwindow->Branch( "runtime", &offline_runtime, "runtime/F" );
  fTwindow->Branch( "iotime", &offline_iotime, "iotime/F" );
  // flash info
  fTwindow->Branch( "flash_z", &flash_z);
  fTwindow->Branch( "flash_y", &flash_y);
  fTwindow->Branch( "flash_dz", &flash_dz);
  fTwindow->Branch( "flash_dy", &flash_dy);
  fTwindow->Branch( "flash_t", &flash_t);
  fTwindow->Branch( "flash_q", &flash_q);
  // online
  fTwindow->Branch( "online_multiplicity", &online_multiplicity );
  fTwindow->Branch( "online_PHMAX", &online_PHMAX );
  fTwindow->Branch( "online_swtrigtick", &online_trigtick );
  fTwindow->Branch( "online_weight", &online_weights );
  fTwindow->Branch( "online_dttrig", &online_dttrig );
  fTwindow->Branch( "online_algonames", &online_algonames );
  fTwindow->Branch( "online_swtrigpass", &online_trigpass );

  // convenience
  fTwindow->Branch( "bnb", &bnb, "bnb/I");
  fTwindow->Branch( "numi", &numi, "numi/I");
  fTwindow->Branch( "ext", &ext, "ext/I");

}

bool SWTrigger::filter(art::Event & evt)
{

  auto const* timeService = lar::providerFrom<detinfo::DetectorClocksService>();
  auto const& opt_clock = timeService->OpticalClock();

  // Implementation of required member function here.
  run    = (int)evt.run();
  subrun = (int)evt.subRun();
  event    = (int)evt.event();
  applied = -1;
  trigger_bits=0;
  bnb=-1;
  numi=-1;

  clearVariables();

  // Make software trigger data product.
  auto pswtrig = std::make_unique<raw::ubdaqSoftwareTriggerData>();

  // initialize data handles and services
  art::ServiceHandle<geo::UBOpReadoutMap> ub_PMT_channel_map;
  art::Handle< std::vector< raw::OpDetWaveform > > wfHandle;
  art::Handle< std::vector< recob::OpFlash > > opflashHandle;
  art::Handle< std::vector< raw::Trigger > > trigHandle;
  art::Handle< raw::DAQHeader > dhHandle;

  // Get OpMap
  ub_PMT_channel_map->SetOpMapRun( evt.run() );

  // Update fem slot.
  fFEMslot = ub_PMT_channel_map->GetTriggerFEMSlot();
  
  // Get Trigger Bit
  evt.getByLabel( fDAQHeaderModule, trigHandle );
  const std::vector< raw::Trigger >& trigvec = (*trigHandle);
  const raw::Trigger& trig = trigvec.at(0);
  const double trigger_time = trig.TriggerTime();

  trigger_bits = trig.TriggerBits();
  if(trig.Triggered(trigger::kTriggerBNB)) bnb = 1;
  if(trig.Triggered(trigger::kTriggerNuMI)) numi = 1;
  if(trig.Triggered(trigger::kTriggerEXT)) ext = 1;

  // Get Timestamp
  evt.getByLabel( fDAQHeaderModule, dhHandle );
  if(dhHandle.isValid()) {
    const raw::DAQHeader& dh = (*dhHandle);
    time_t daq_timestamp = dh.GetTimeStamp();
    event_timestamp_sec = (double)(daq_timestamp>>32);
    event_timestamp_usec  = 0.001*(double)( daq_timestamp & 0xFFFFFFFF );
  }

  // Get Waveforms
  offline_iotime = -1;
  _stopwatch.Start();
  evt.getByLabel( fOpDataModule, "OpdetBeamHighGain", wfHandle);
  std::vector<raw::OpDetWaveform> const& opwfms(*wfHandle);

  // Get Op Flashes
  evt.getByLabel( fOpFlashModule, "", opflashHandle);
  flash_t.clear();
  flash_q.clear();
  flash_z.clear();
  flash_y.clear();
  flash_dz.clear();
  flash_dy.clear();

  if(opflashHandle.isValid()) {
    std::vector<recob::OpFlash> const& opflash(*opflashHandle);
    
    // loop through flashes and save flash info
    for (auto &flash : opflash){
      flash_t.push_back ( flash.Time() );
      flash_q.push_back ( flash.TotalPE() );
      flash_z.push_back ( flash.ZCenter() );
      flash_y.push_back ( flash.YCenter() );
      flash_dz.push_back ( flash.ZWidth() );
      flash_dy.push_back ( flash.YWidth() );

    }// for all flashes
  }

  // first accumulate waveforms
  trigger::WaveformArray_t wfms;
  wfms.resize( fNChannels );

  //
  // Figure out target beam window
  //
  uint64_t min_trig_dt = 1e12;
  uint64_t target_time = 1e12;
  for(auto &wfm : opwfms)  {

    unsigned int readout_ch = wfm.ChannelNumber();
    unsigned int c,s,f;
    ub_PMT_channel_map->GetCrateSlotFEMChFromReadoutChannel(readout_ch, c, s, f);
    size_t slot = s;
    size_t ch = f%100;
    if ( slot!=fFEMslot )
      continue;
    if ( ch>=fNChannels )
      continue;
    if ( wfm.size()<fMinReadoutTicks )
      continue;
    long int trig_dt = (long int)(trigger_time - wfm.TimeStamp());
    uint64_t unsigned_trig_dt = (trig_dt < 0 ? trig_dt*(-1) : trig_dt);

    if(min_trig_dt > unsigned_trig_dt) {
      min_trig_dt = unsigned_trig_dt;
      target_time = wfm.TimeStamp() * 1.e3;
    } 

  }
  if(target_time==1e12) {
    std::cerr<<"\033[93m[ERROR]\033[00m Did not find target time... SKIPPING EVENT" <<std::endl;
    evt.put(std::move(pswtrig));
    return false;
  }

  // Collect waveforms @ target timing
  for(auto &wfm : opwfms)  {

    unsigned int readout_ch = wfm.ChannelNumber();
    unsigned int c,s,f;
    ub_PMT_channel_map->GetCrateSlotFEMChFromReadoutChannel(readout_ch, c, s, f);
    size_t slot = s;
    size_t ch = f%100;

    if ( slot!=fFEMslot )
      continue;
    if ( ch%100>=fNChannels )
      continue;
    if ( wfm.size()<fMinReadoutTicks )
      continue;
    if ( (uint64_t)(wfm.TimeStamp()*1.e3) != target_time ) 
      continue;

    if(!wfms[ch].empty()) {
      std::cerr<<"\033[93m[ERROR]\033[00m Found > 1 waveform with same time for channel "<<ch<<" ... SKIPPING EVENT" << std::endl;
      evt.put(std::move(pswtrig));
      return false;
    }
    wfms[ch].resize( fMinReadoutTicks, 0 );
    for (size_t i=0; i<fMinReadoutTicks; i++)
      wfms[ch][i] = (int)wfm[i];
  }

  // Make sure nothing missing
  bool missing=false;
  for(size_t ch=0;ch<wfms.size(); ++ch) {
    auto const& wfm = wfms[ch];
    if(wfm.empty()) {
      std::cerr<<"\033[93m[ERROR]\033[00m Missing an waveform for channel " << ch << " ... SKIPPING EVENT" << std::endl;
      missing=true;
    }
  }

  _stopwatch.Stop();
  offline_iotime = _stopwatch.RealTime();

  // Extract online sw trigger results
  art::Handle< raw::ubdaqSoftwareTriggerData > swtrigHandle;
  evt.getByLabel( fDAQHeaderModule, swtrigHandle );

  if ( swtrigHandle.isValid() ) {
    std::cout << "[FEMemulator Module: Getting online result for event=" << event << " hwtrigbit=" << trig.TriggerBits()  << "]" << std::endl;
    const raw::ubdaqSoftwareTriggerData& swtrig = (*swtrigHandle);
    for (int i=0; i<swtrig.getNumberOfAlgorithms(); i++) {
      bool pass = swtrig.getPass( i );
      uint32_t phmax = swtrig.getPhmax(i);
      uint32_t multi = swtrig.getMultiplicity(i);
      uint32_t tick = swtrig.getTriggerTick(i);
      double dt = swtrig.getTimeSinceTrigger(i);
      std::string name = swtrig.getTriggerAlgorithm(i);
      float weight = swtrig.getPrescale(i);
      
      std::cout << "  [" << pass << "] " << name << " tick=" << tick << " dt=" << dt << " PHMAX=" << phmax << " weight=" << weight << std::endl;
      online_PHMAX.push_back( phmax );
      online_multiplicity.push_back( multi );
      online_weights.push_back( weight );
      online_algonames.push_back( name );
      online_trigtick.push_back( tick );
      online_dttrig.push_back( dt );
      if ( pass ) online_trigpass.push_back( 1 ); else online_trigpass.push_back( 0 );
    }
  }

  if(missing) {
    evt.put(std::move(pswtrig));
    return false;
  }
  
  // Apply Triggers
  applied=1;
  _stopwatch.Start();
  m_results = m_algos.Process( trig.TriggerBits(), wfms );
  _stopwatch.Stop();
  offline_runtime = _stopwatch.RealTime();
  std::cout << "[FEMemulator Module: Running offline algo on event=" << event << " hwtrigbit=" << trig.TriggerBits()  << "]" << std::endl;
  bool pass = false;
  double dt = 0.;

  for ( std::vector< trigger::Result >::iterator it=m_results.begin(); it!=m_results.end(); it++ ) {
    dt = trig.BeamGateTime() + (*it).time * opt_clock.TickPeriod();
    std::cout << "  [" << (*it).pass << "] "
	      << (*it).algo_instance_name 
	      << " algo=" << (*it).pass_algo << " ps=" << (*it).pass_prescale 
	      << " tick=" << (*it).time
	      << " dt=" << dt
	      << " PHMAX=" << (*it).amplitude << " weight=" << (*it).prescale_weight << std::endl;
    if ( (*it).algo_instance_name.find("FEM")!=std::string::npos ) {
      trigger::AlgoBase* pAlgo = &(m_algos.GetAlgo( (*it).algo_instance_name ));
      trigger::fememu::FEMBeamTriggerAlgo* pFEMalgo = dynamic_cast<trigger::fememu::FEMBeamTriggerAlgo*>(pAlgo);
      if ( pFEMalgo!=NULL )
	offline_PHMAX_vect = pFEMalgo->PHMAX();
      
    }
    offline_PHMAX.push_back( (*it).amplitude );
    offline_multiplicity.push_back( (*it).multiplicity );
    offline_weights.push_back( (*it).prescale_weight );
    offline_algonames.push_back( (*it).algo_instance_name );
    offline_trigtick.push_back( (*it).time );
    offline_dttrig.push_back( dt );
    if ( (*it).pass_algo ) offline_algopass.push_back( 1 ); else offline_algopass.push_back( 0 );
    if ( (*it).pass_prescale ) offline_prescalepass.push_back( 1 ); else offline_prescalepass.push_back( 0 );
    if ( (*it).pass ) {
      offline_trigpass.push_back( 1 ); 
      pass = true;
    }
    else { offline_trigpass.push_back( 0 ); }

    // Update software trigger data product that we put into the event.

    pswtrig->addAlgorithm((*it).algo_instance_name,   // Algorithm name.
			  (*it).pass_algo,            // Pass algorithm flag.
			  (*it).pass_prescale,        // Pass prescale flag.
			  (*it).amplitude,            // PHMAX.
			  (*it).multiplicity,         // Multiplicity.
			  (*it).time,                 // Tick.
			  dt,                         // Time difference.
			  (*it).prescale_weight);     // Prescale factor.
  }
  // save phmax vector
  fTwindow->Fill();

  // Stick software trigger data product into the event.
  evt.put(std::move(pswtrig));

  return pass;
}

void SWTrigger::clearVariables() {

  m_results.clear();
  bnb = numi = ext = 0;
  offline_PHMAX.clear();
  offline_multiplicity.clear();
  offline_trigtick.clear();
  offline_dttrig.clear();
  offline_weights.clear();
  offline_algonames.clear();
  offline_trigpass.clear();
  offline_algopass.clear();
  offline_prescalepass.clear();
  offline_PHMAX_vect.clear();

  online_PHMAX.clear();
  online_multiplicity.clear();
  online_weights.clear();
  online_algonames.clear();
  online_trigpass.clear();
  online_trigtick.clear();
  online_dttrig.clear();
}

DEFINE_ART_MODULE(SWTrigger)
