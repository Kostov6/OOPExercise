#pragma once
#include"Circle.h"

class Ellipse : public Circle
{
private:
	float r2;
public:
	Ellipse();
	Ellipse(float par1, float par2);

	float getR2() const;
	void setR2(float par);

	float getPerimeter() const;
	float getArea() const;

	friend istream& operator>>(istream& i, Ellipse& el);
	friend ostream& operator<<(ostream& o, const Ellipse& el);
};

