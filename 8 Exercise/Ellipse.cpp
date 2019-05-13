#include "Ellipse.h"



Ellipse::Ellipse() : r2(0)
{
}

Ellipse::Ellipse(float par1, float par2) : Circle(par1) , r2(par2)
{
}

float Ellipse::getR2() const
{
	return r2;
}

void Ellipse::setR2(float par)
{
	r2 = par;
}

float Ellipse::getPerimeter() const
{
	return 2 * 3.14*sqrt((r*r + r2*r2) / 2);
}

float Ellipse::getArea() const
{
	return 3.14*r*r2;
}

