#pragma once
class Figure
{
public:
	Figure(double width, double height) :width(width), height(height) {}
	double area();
protected:
	double width;
	double height;
};

