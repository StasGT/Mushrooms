#include "include/matrix.h"
#include "include/rgb_matrix.h"
#include "include/bw_matrix.h"
#include "include/bw_color.h"
#include "include/circle.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <list>



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
    BWMatrix m(200, 200);
    BWColor bwcolor(255);

    //bw.draw(cap);
    //std::list<int> a = { 100, 100 };
    //std::list<int> b = { 100, 150 };
    //std::list<int> c = { 150, 150 };
    //GenTriangle(m, a, b, bwcolor);


    Circle a(50, 100, 30, bwcolor);

    //Circle(m, 150, 100, 30, bwcolor);
    //Circle(m, 100, 50, 30, bwcolor);
    //Circle(m, 100, 150, 30, bwcolor);
    m.draw(a);
    m.display();

}



//int main() {
//    RGBMatrix rgb;
//    BWMatrix bw;
//    bw.readImage("images/hse_bw.png");
//    rgb.readImage("images/hse_rgb.png");
//    bw.display();
//    rgb.display();
//
//    BWMatrix inverted = bw.invert();
//    inverted.display();
//    BWMatrix newBW = rgb.toBW();
//    newBW.display();
//    return 0;
//}