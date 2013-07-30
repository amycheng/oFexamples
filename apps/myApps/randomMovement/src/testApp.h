#pragma once

#include "ofMain.h"
#include "Mover.h" // be sure to include the object header file

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        
       // Mover amy; // declaring our new object
  
        vector<Mover> movers; //vector kinda like an array but for C++
		
};

//declare public shiz in header files!