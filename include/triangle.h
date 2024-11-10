#pragma once
#include "bw_color.h"
#include "bw_matrix.h"
#include <list>

class Triangle {

public:
    Triangle(Matrix& mat);
    Triangle(std::list<int>a, std::list<int> b, std::list<int> c, BWColor& color);

private:
    std::list<int>m_a;
    std::list<int>m_b;
    std::list<int>m_c;
    int m_color;
};