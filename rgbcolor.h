#pragma once
#include <list>

class RGBColor
{
public:
	RGBColor();
	RGBColor(int r, int g, int b);
	std::list<int> getColor();
	//operator int() const { return m_color; }
	void changeColor(int r, int g, int b);

private:
	std::list<int>m_color;
};