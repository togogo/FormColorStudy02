//
//  ColorScheme.hpp
//  form_color_study02
//
//  Created by Togo Kida on 2018/03/30.
//

#pragma once
#include "ofMain.h"
#include "ofxGui.h"
#include "ColorPalette.hpp"

class ColorScheme{
public:
    
    ColorPalette blueSunset;
    ColorPalette classicRetro;
    ColorPalette shimmeringBG;

    ofxPanel palette;
    vector<ofxButton> colorSamples;
    vector<int> numSamples;
    
    ofxButton test;//for debugging purposes...test...
    
    void setupPalette();
    void loadColors();//load all colors available
    void showColors();//show all loaded color pallettes
    
    
};
