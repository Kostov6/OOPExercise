#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;

class Circle : public Shape
{
protected:
	float r;
public:
	Circle();
	Circle(float par);

	float getR() const;
	void setR(float par);

	float getPerimeter() const;
	float getArea() const;

	friend istream& operator>>(istream& i, Circle& el);
	friend ostream& operator<<(ostream& o, const Circle& el);
};

