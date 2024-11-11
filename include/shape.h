#pragma once
#include "circle.h"
#include "triangle.h"
class Circle;
class Triangle;

class Shape: public Circle, public Triangle {
public:
	Shape() {};
	//Shape(Circle& obj, Matrix& mat) { obj.draw(mat); }
	//Shape(Triangle& obj, Matrix& mat) { obj.draw(mat); }
	//void draw(Shape& obj, Matrix& mat) { obj.draw(mat); }
};