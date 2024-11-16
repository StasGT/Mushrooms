#pragma once
#include "bw_matrix.h"
#include "color.h"
#include "shape.h"
#include <vector>


class Rectangle: public Shape {
public:
    Rectangle();
    Rectangle(Rectangle& obj);
    Rectangle(Point left_top, int t_width, int t_height, BWColor color);
    Rectangle(Point left_top, int t_width, int t_height, RGBColor color);
    void draw(Matrix& mat);

private:
    int left_x;
    int top_y;
    int width;
    int height;
    std::vector<int> color;
};