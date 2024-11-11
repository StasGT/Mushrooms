#pragma once
#include "bw_matrix.h"
#include "bw_color.h"
#include "rgbcolor.h"
#include <list>


class Rectangle {
public:
    Rectangle();
    Rectangle(Rectangle& obj);
    Rectangle(std::list<int>left_top, int t_width, int t_height, BWColor color);
    Rectangle(std::list<int>left_top, int t_width, int t_height, RGBColor color);
    void draw(Matrix& mat);

private:
    int left_x;
    int top_y;
    int width;
    int height;
    std::list<int> color;
};