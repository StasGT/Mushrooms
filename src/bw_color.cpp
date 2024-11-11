#include "../include/bw_color.h"

#include <iostream>

BWColor::BWColor()
	: m_color({ 0 })
{}
BWColor::BWColor(int color) {
	m_color.assign({ color });
}
void BWColor::changeColor(int color) {
	m_color.assign({ color });
}