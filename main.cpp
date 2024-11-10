#include "include/rgb_matrix.h"
#include "include/bw_matrix.h"
#include "include/bw_color.h"
#include "include/circle.h"
#include "include/triangle.h"
#include "include/rgbcolor.h"

int main(){

    RGBMatrix rgb(1000, 1000, 0);
    RGBColor rgbColor(102, 205, 255);
    Rectangle sky({ 0, 0 }, 1000, 750, rgbColor);
    rgbColor.changeColor(0, 153, 0);
    Rectangle grass({ 0, 750 }, 1000, 1000, rgbColor);
    rgbColor.changeColor(255, 255, 0);
    Circle sun({ 50, 50 }, 300, rgbColor);
    Triangle ray1({ 360, 50 }, { 550, 30 }, { 550, 70 }, rgbColor);
    Triangle ray2({ 270, 270 }, { 420, 360 }, { 390, 400 }, rgbColor);
    Triangle ray3({ 50, 360 }, { 30, 550 }, { 70, 550 }, rgbColor);
    rgbColor.changeColor(102, 51, 0);
    Rectangle wall({ 300, 450 }, 500, 400, rgbColor);
    rgbColor.changeColor(0, 0, 0);
    Rectangle flue({ 650, 275 }, 50, 100, rgbColor);
    rgbColor.changeColor(51, 0, 0);
    Triangle roof({ 280, 450 }, { 550, 250 }, { 820, 450 }, rgbColor);
    rgbColor.changeColor(204, 102, 0);
    Rectangle door({ 700, 675 }, 75, 150, rgbColor);
    rgbColor.changeColor(0, 0, 0);
    Circle knob({ 767, 750 }, 3, rgbColor);
    rgbColor.changeColor(102, 163, 255);
    Rectangle window1({ 350, 475 }, 150, 175, rgbColor);
    Rectangle window2({ 600, 475 }, 150, 175, rgbColor);
    
    rgb.draw(sky);
    rgb.draw(grass);
    rgb.draw(sun);
    rgb.draw(ray1);
    rgb.draw(ray2);
    rgb.draw(ray3);
    rgb.draw(wall);
    rgb.draw(flue);
    rgb.draw(roof);
    rgb.draw(door);
    rgb.draw(knob);
    rgb.draw(window1);
    rgb.draw(window2);
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