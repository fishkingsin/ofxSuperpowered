#pragma once

#include "ofxiOS.h"
#import "SuperpoweredAdvancedAudioPlayer.h"
#import "SuperpoweredFilter.h"
#import "SuperpoweredRoll.h"
#import "SuperpoweredFlanger.h"
#import "SuperpoweredIOSAudioIO.h"
#import "SuperpoweredSimple.h"
class ofApp : public ofxiOSApp {
	
    public:
        void setup();
        void update();
        void draw();
        void exit();
	
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
        void deviceOrientationChanged(int newOrientation);
    SuperpoweredAdvancedAudioPlayer *playerA, *playerB;
    SuperpoweredIOSAudioIO *output;
    SuperpoweredRoll *roll;
    SuperpoweredFilter *filter;
    SuperpoweredFlanger *flanger;
};


