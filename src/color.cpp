#include "../include/color.h"

BWColor::BWColor()
	: m_color({ 0 })
{}
BWColor::BWColor(int color) {
	m_color.assign({ color });
}
std::vector<int> BWColor::getColor() {
	return m_color;
}
void BWColor::changeColor(int color) {
	m_color.assign({ color });
}


RGBColor::RGBColor()
{}
RGBColor::RGBColor(int r, int g, int b)
	:m_color({ r, g, b })
{}
std::vector<int> RGBColor::getColor() {
	return m_color;
}
//operator int() const { return m_color; }
void RGBColor::changeColor(int r, int g, int b) {
	m_color = { r, g, b };
}