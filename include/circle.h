#pragma once
#include "bw_matrix.h"
#include "color.h"
#include <vector>


class Circle {
public:
    Circle();
    Circle(Circle& obj);
    Circle(std::vector<int>center, int rad, BWColor c);
    Circle(std::vector<int>center, int rad, RGBColor c);
    void draw(Matrix& mat);

private:
    int centerY;
    int centerX;
    int r;
    std::vector<int>color;
};