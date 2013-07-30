//instructions for C compiler

#pragma once //run once, prevents compiler from including .h/header file multiple times
#include "ofMain.h"

class Mover {
    
public: //accessible outside of brackets 
    
    int x;
    int y;
    int r;
    ofColor color;
    
    
    Mover(); //constructor
    void update();
    void draw();

    
};

