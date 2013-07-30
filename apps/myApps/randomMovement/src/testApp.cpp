#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableAlphaBlending(); //enable alpha blending, it's a memory thang
    for (int i=0; i<1000; i++) {
        Mover amy;
        movers.push_back(amy);
    }
}

//--------------------------------------------------------------
void testApp::update(){
   // amy.update();
    for(int i = 0; i<movers.size(); i++){
        movers[i].update();
    };
     
}

//--------------------------------------------------------------
void testApp::draw(){
   // amy.draw();
    for(int i = 0; i<movers.size(); i++){
        movers[i].draw();
    };
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
