#include "Circle.h"

Circle::Circle() : r(0)
{
}

Circle::Circle(float par) : r(par)
{
}

float Circle::getR() const
{
	return r;
}

void Circle::setR(float par)
{
	r = par;
}

float Circle::getPerimeter() const
{
	return 2 * r*3.14;
}

float Circle::getArea() const
{
	return 3.14*r*r;
}

istream & operator>>(istream & i, Circle & el)
{
	cout << "Enter r:" << endl;
	i >> el.r;
	return i;
}

ostream & operator<<(ostream & o, const Circle & el)
{
	o << "R: " << el.r;
	return o;
}
