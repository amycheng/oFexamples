#include "Mover.h"
#include "ofMain.h"

//object constructor
Mover::Mover(){ //colons are for the compiler's use
    x=ofGetWidth()/2;
    y=ofGetHeight()/2;
    r = ofRandom(2, 10);

    color.set(ofRandom(255), 0, ofRandom(255));

}

//use void for functions that don't return anything

void Mover::update(){
    //ofRandom()
    if (ofRandom(1)<.5) {
        x ++;
    }else {
        x --;
    }
    if (ofRandom(1)<.5) {
        y ++;
    }else {
        y --;
    }

}

void Mover::draw(){
    
    ofSetColor(color, 50);
    ofFill();
    ofCircle(x, y, r);
}
