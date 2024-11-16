#pragma once
#include "circle.h"
#include "triangle.h"

class Draw {
public:
	Draw(Circle& obj, BWMatrix& mat) { obj.draw(mat); }



	//void draw(Circle& obj) { obj.draw(*this); }
	//void draw(Triangle& obj) { obj.draw(*this); }
};