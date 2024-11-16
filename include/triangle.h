#pragma once
#include "color.h"
#include "bw_matrix.h"
#include <vector>

class Triangle {

public:
    Triangle();
    Triangle(Triangle& obj);
    Triangle(std::vector<int>a, std::vector<int> b, std::vector<int> c, BWColor& color);
    Triangle(std::vector<int>a, std::vector<int> b, std::vector<int> c, RGBColor& color);
    void draw(Matrix& mat);

private:
    std::vector<int>m_a;
    std::vector<int>m_b;
    std::vector<int>m_c;
    std::vector<int>m_color;
};