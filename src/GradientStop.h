#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class GradientStop {
public:
  ofVec2f pos;
  ofVec2f dir;
  ofxIntSlider* intensity;
};

