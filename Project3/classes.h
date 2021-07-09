#pragma once
class RectangleShape {
	double width;
	double length;
public :
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;
	void paint() const;
	RectangleShape();
	RectangleShape(double l, double w);
};


