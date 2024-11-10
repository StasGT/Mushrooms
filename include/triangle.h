#pragma once
#include "bw_color.h"
#include "rgbcolor.h"
#include "bw_matrix.h"
#include <list>

class Triangle {

public:
    Triangle();
    Triangle(Triangle& obj);
    Triangle(std::list<int>a, std::list<int> b, std::list<int> c, BWColor& color);
    Triangle(std::list<int>a, std::list<int> b, std::list<int> c, RGBColor& color);
    void draw(Matrix& mat);

private:
    std::list<int>m_a;
    std::list<int>m_b;
    std::list<int>m_c;
    std::list<int>m_color;
};