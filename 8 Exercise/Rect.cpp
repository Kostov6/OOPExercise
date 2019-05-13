#include "Rect.h"



Rect::Rect() : b(0)
{
}

Rect::Rect(float a, float b) : Square(a) , b(b)
{
}

float Rect::getB() const
{
	return b;
}

void Rect::setB(float par)
{
	b = par;
}

float Rect::getPerimeter() const
{
	return 2*a+2*b;
}

float Rect::getArea(int dummy) const
{
	return a*b;
}

istream & operator>>(istream & i, Rect & el)
{
	cout << "Enter a and b:" << endl;
	i >> el.a >> el.b;
	return i;
}

ostream & operator<<(ostream & o, const Rect & el)
{
	o << "A and B: " << el.a <<" " << el.b << endl;
	return o;
}
