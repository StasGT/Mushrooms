//#include "include/matrix.h"
#include "include/rgb_matrix.h"
#include "include/bw_matrix.h"
#include "include/bw_color.h"
#include "include/circle.h"
#include "include/triangle.h"
#include "include/rgbcolor.h"

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <math.h>
//#include <list>



void GenMatrix(Matrix& mat, int min = 0, int max = 255) {
    for (size_t r = 0; r < mat.getRows(); ++r) {
        for (size_t c = 0; c < mat.getCols(); ++c) {
            for (size_t ch = 0; ch < mat.getChannels(); ++ch) {
                mat.at(r, c, ch) = min + std::rand() % (max - min + 1);
            }
        }
    }
}



//void GenTriangle(Matrix& mat, std::list<int>a, std::list<int> b, std::list<int> c, int color = 255) {
//    // Convert lists to x,y coordinates
//    int y1 = *a.begin(), x1 = a.back();
//    int y2 = *b.begin(), x2 = b.back();
//    int y3 = *c.begin(), x3 = c.back();
//
//    // Bounds checking for coordinates
//    int width = mat.getCols();
//    int height = mat.getRows();
//    int slope1 = (x1 - x2) / (y1 - y2);
//    int slope2 = (x2 - x3) / (y2 - y3);
//    int slope3 = (x3 - x1) / (y3 - y1);
//
//    for (int y = 0; y < height; y++) {
//        for (int x = 0; x < width; x++) {
//            //int fx12 = x1 + (-y + y1) * slope1;
//            if (y - y1 == (x - x1) / slope1) {
//                mat.at(y, x) = 255;
//            }
//        }
//    }
//    
//    
//}

int main(){

    RGBMatrix rgb(1000, 1000, 0);
    RGBColor rgbColor(102, 205, 255);
    Rectangle sky({ 0, 0 }, 1000, 750, rgbColor);
    //rgbColor.changeColor(0, 153, 0);
    //Rectangle grass({ 0, 1500 }, 2000, 2000, rgbColor);
    //rgbColor.changeColor(255, 255, 0);
    //Circle sun({ 50, 50 }, 300, rgbColor);
    //Triangle ray1({ 360, 50 }, { 550, 30 }, { 550, 70 }, rgbColor);
    //Triangle ray2({ 270, 270 }, { 420, 360 }, { 390, 400 }, rgbColor);
    //Triangle ray3({ 50, 360 }, { 30, 550 }, { 70, 550 }, rgbColor);
    //rgbColor.changeColor(102, 51, 0);
    //Rectangle wall({ 600, 900 }, 1000, 800, rgbColor);
    //rgbColor.changeColor(0, 0, 0);
    //Rectangle flue({ 1300, 550 }, 100, 200, rgbColor);
    //rgbColor.changeColor(51, 0, 0);
    //Triangle roof({ 560, 900 }, { 1100, 500 }, { 1640, 900 }, rgbColor);
    //rgbColor.changeColor(204, 102, 0);
    //Rectangle door({ 1400, 1350 }, 150, 300, rgbColor);
    //rgbColor.changeColor(0, 0, 0);
    //Circle knob({ 1535, 1500 }, 6, rgbColor);
    //rgbColor.changeColor(102, 163, 255);
    //Rectangle window1({ 700, 950 }, 300, 350, rgbColor);
    //Rectangle window2({ 1200, 950 }, 300, 350, rgbColor);
    //
    rgb.draw(sky);
    //rgb.draw(grass);
    //rgb.draw(sun);
    //rgb.draw(ray1);
    //rgb.draw(ray2);
    //rgb.draw(ray3);
    //rgb.draw(wall);
    //rgb.draw(flue);
    //rgb.draw(roof);
    //rgb.draw(door);
    //rgb.draw(knob);
    //rgb.draw(window1);
    //rgb.draw(window2);
    rgb.display();


    //int bgColor = 255;
    //int capColor = 179;
    //int stipeColor = 128;
    //int bottomColor = 52;
    //BWMatrix bw(1000, 1000, 255);
    //BWColor bwColor(capColor);
    //Circle cap({ 500, 500 }, 350, bwColor);
    //bwColor.changeColor(bgColor);
    //Rectangle background({ 0, 350 }, 1000, 500, bwColor);
    //Rectangle background2({ 400, 650 }, 200, 100, bwColor);
    //bwColor.changeColor(stipeColor);
    //Triangle stipe({ 500, 175 }, { 600, 750 }, { 400, 750 }, bwColor);
    //bwColor.changeColor(capColor);
    //Rectangle background3({ 400, 175 }, 200, 175, bwColor);
    //bwColor.changeColor(bottomColor);
    //Circle bottom({ 500, 750 }, 100, bwColor);
    //
    //bw.draw(cap);
    //bw.draw(background);
    //bw.draw(bottom);
    //bw.draw(background2);
    //bw.draw(stipe);
    //bw.draw(background3);
    //bw.display();
}