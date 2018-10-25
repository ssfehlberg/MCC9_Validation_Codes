art::Handle<std::vector<ubana::SelectionResult> > selection_h;
e.getByLabel("UBXSec", selection_h);
if(!selection_h.isValid()){
  mf::LogError(__PRETTY_FUNCTION__) << "SelectionResult product not found." << std::endl;
  throw cet::exception();
}
std::vector<art::Ptr<ubana::SelectionResult>> selection_v;
art::fill_ptr_vector(selection_v, selection_h);
// The selection result vector will always only contain one entry (at least 1 neutrino per event)
if (selection_v.at(0)->GetSelectionStatus()) {

  // Get the selected TPCObject
  art::FindManyP<ubana::TPCObject> tpcobject_from_selection(selection_h, e, "UBXSec"); 
  art::Ptr<ubana::TPCObject> tpcobj_candidate = tpcobject_from_selection.at(0).at(0);

  // Get the TPCObject handler
  art::Handle<std::vector<ubana::TPCObject>> tpcobj_h;
  e.getByLabel("TPCObjectMaker", tpcobj_h);

  // Get the tracks associated to the selected TPCObject
  art::FindManyP<recob::Track> tracks_from_tpcobject(tpcobj_h, e, "TPCObjectMaker");
  std::vector<art::Ptr<recob::Track>> tracks = tracks_from_tpcobject.at(tpcobj_candidate.key());

  // Get the vertex associated with the TPCObject
  art::FindManyP<recob::Vertex> vertices_from_tpcobject(tpcobj_h, e, "TPCObjectMaker");
  std::vector<art::Ptr<recob::Vertex>> vertices = vertices_from_tpcobject.at(tpcobj_candidate.key());
  art::Ptr<recob::Vertex> neutrino_candidate_vertex = vertices.at(0);

  // The longest track in "tracks" is the muon candidate
  // "neutrino_candidate_vertex" is the candidate neutrino vertex

} else { 

  // Event is not selected, return
  return;
}
