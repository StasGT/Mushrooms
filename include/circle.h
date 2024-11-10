#pragma once
#include "bw_matrix.h"
#include "bw_color.h"


class Circle {
public:
    Circle();
    Circle(Circle& obj);
    Circle(int centerY, int centerX, int r, BWColor color);
    void draw(Matrix& mat);

private:
    int centerY;
    int centerX;
    int r;
    int color;
};