#pragma once
#include "bw_matrix.h"
#include "bw_color.h"
#include <list>


class Circle {
public:
    Circle();
    Circle(Circle& obj);
    Circle(std::list<int>center, int rad, BWColor c);
    void draw(Matrix& mat);

private:
    int centerY;
    int centerX;
    int r;
    std::list<int>color;
};