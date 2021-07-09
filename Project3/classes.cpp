#include "classes.h"
//#include "Source.cpp"
#include<iostream>
using namespace std;
void RectangleShape::setDimension(double l, double w) {
	if (l >= 0)
		length = l;
	else
		length = 0;
	if (w >= 0)
		width = w;
	else
		width = 0;
	paint();
}
double RectangleShape::getLength() const {
	return length;
}
double RectangleShape::getWidth() const {
	return width;
}
double RectangleShape::area() const {
	return width * length;
}
double RectangleShape::perimeter() const {
	return 2 * (length + width);
}
void RectangleShape::print() const {
	cout << "Length = " << length << "; Width = " << width;
}
void RectangleShape::paint() const {
	int W = static_cast<int> (getWidth());
	int L = static_cast<int>(getLength());
	cout << "  ";
	for (int i = W; i > 0; i--) {
		cout << "* ";
	}
	cout << "  ";
	cout << endl;
	for (int i = L; i > 0; i--) {

		cout << "*";
		for (int i = W; i > 0; i--) {
			cout << "  ";

		}
		cout << "*" << endl;
	}
	cout << "  ";
	for (int i = W; i > 0; i--) {
		cout << "* ";
	}
	cout << "  ";
}
RectangleShape::RectangleShape() {
	length = 0;
	width = 0;
}
RectangleShape::RectangleShape(double l, double w) {
	setDimension(l, w);
}


