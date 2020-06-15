#include <iostream>
using namespace std;
#include"Figure.h"
#include"Rectangle.h"
#include"Triangle.h"

int main()
{
	
	Rectangle rectangle(1, 2);
	Triangle triangle(1, 2);
	cout << "矩形的面积为：" << rectangle.area() << endl;
	cout << "等腰三角形的面积为：" << triangle.area() << endl;


}