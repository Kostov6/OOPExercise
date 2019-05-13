#include "Square.h"

Square::Square() : a(0)
{
}

Square::Square(float par) : a(par)
{
}

float Square::getA() const
{
	return a;
}

void Square::setA(float par)
{
	a = par;
}

float Square::getPerimeter() const
{
	return 4 * a;
}

float Square::getArea() const
{
	return a*a;
}

istream& operator>>(istream & i, Square & el)
{
	cout << "Enter a:" << endl;
	i >> el.a;
	return i;
}

ostream & operator<<(ostream & o, const Square & el)
{
	o <<"A: "<< el.a << endl;
	return o;
}
