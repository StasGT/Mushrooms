#include "../include/rgbcolor.h"

RGBColor::RGBColor() 
{}
RGBColor::RGBColor(int r, int g, int b)
	:m_color({r, g, b})
{}
std::list<int> RGBColor::getColor() {
	return m_color;
}
//operator int() const { return m_color; }
void RGBColor::changeColor(int r, int g, int b) { 
	m_color = {r, g, b};
}