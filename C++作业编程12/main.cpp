#include <iostream>
using namespace std;
#include"Figure.h"
#include"Rectangle.h"
#include"Triangle.h"

int main()
{
	
	Rectangle rectangle(1, 2);
	Triangle triangle(1, 2);
	cout << "���ε����Ϊ��" << rectangle.area() << endl;
	cout << "���������ε����Ϊ��" << triangle.area() << endl;


}