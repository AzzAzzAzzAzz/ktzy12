#pragma once
#include "Figure.h"
class Rectangle :
	public Figure
{
public:
	Rectangle(double width, double height) :Figure(width, height) {}
	double area();
};

