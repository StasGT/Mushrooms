#pragma once

class BWColor
{
public:
	BWColor();
	BWColor(int color);
	int getColor() const { return m_color; }
	//operator int() const { return m_color; }

private:
	int m_color;
};