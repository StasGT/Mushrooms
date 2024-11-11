#pragma once
#include <list>

class BWColor
{
public:
	BWColor();
	BWColor(int color);
	std::list<int> getColor() const { return m_color; }
	//operator int() const { return m_color; }
	void changeColor(int color);

private:
	std::list<int> m_color;
};