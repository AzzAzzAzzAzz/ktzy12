#pragma once
#include "Figure.h"
class Triangle :
	public Figure
{
public:
	Triangle(double width, double height) :Figure(width, height) {}
	double area();

};

