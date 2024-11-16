#pragma once
#include <vector>
#include "color.h"

struct Point {
	int x;
	int y;
};

class Shape {
public:
	std::vector<Point> getPoints() { return m_points; }

protected:
	std::vector<Point>m_points;
};