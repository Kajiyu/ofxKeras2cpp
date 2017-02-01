#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cout << "This is simple example with Keras neural network model loading into C++.\n"
    << "Keras model will be used in C++ for prediction only." << endl;
    
    keras::DataChunk *sample = new keras::DataChunk2D();
    string dat_path = ofFilePath::join(ofFilePath::getCurrentExeDir(),  "../../../data/") + "sample_mnist.dat";
    sample->read_from_file(dat_path);
    std::cout << sample->get_3d().size() << std::endl;
    string nnet_path = ofFilePath::join(ofFilePath::getCurrentExeDir(),  "../../../data/") + "dumped.nnet";
    keras::KerasModel m(nnet_path, true);
    m.compute_output(sample);
    delete sample;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
