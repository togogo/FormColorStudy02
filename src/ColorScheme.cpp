//
//  ColorScheme.cpp
//  form_color_study02
//
//  Created by Togo Kida on 2018/03/30.
//

#include "ColorScheme.hpp"

//setup ofxGui for showing the color palettes
void ColorScheme::setupPalette(){
    
    palette.setup();//depricated
    palette.setPosition(ofGetWidth() - 240, 10);//depricated
    palette.add(test.setup("test"));//depricated

}

void ColorScheme::loadColors(){
    
    //Load various color palettes
    
    blueSunset.addColor(ofColor(61, 102, 141), "Blue Sunset");
    blueSunset.addColor(ofColor(242, 204, 53));
    blueSunset.addColor(ofColor(232, 164, 43));
    blueSunset.addColor(ofColor(233, 139, 37));
    blueSunset.addColor(ofColor(186, 98, 26));
    
    classicRetro.addColor(ofColor(159, 71, 75), "Classic and Retro");
    classicRetro.addColor(ofColor(40, 39, 37));
    classicRetro.addColor(ofColor(111, 137, 30));
    classicRetro.addColor(ofColor(158, 126, 49));
    classicRetro.addColor(ofColor(83, 57, 56));
    
    shimmeringBG.addColor(ofColor(18, 64, 187), "Shimmering Blue and Green");
    shimmeringBG.addColor(ofColor(45, 129, 238));
    shimmeringBG.addColor(ofColor(65, 172, 238));
    shimmeringBG.addColor(ofColor(238, 243, 104));
    shimmeringBG.addColor(ofColor(164, 151, 118));
}

void ColorScheme::showColors(){
    
    //blueSunset.drawPalette(ofVec2f(ofGetMouseX(), ofGetMouseY()));
    blueSunset.drawPalette(ofVec2f(30, 40));
    classicRetro.drawPalette(ofVec2f(30, 80));
    shimmeringBG.drawPalette(ofVec2f(30, 120));
    //palette.draw();
}
