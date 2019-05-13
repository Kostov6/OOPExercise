#pragma once
#include<iostream>
#include"Square.h"
using namespace std;

class Rect : public Square
{
private:
	float b;
public:
	Rect();
	Rect(float a, float b);

	//new functions
	float getB() const;
	void setB(float par);

	//override
	float getPerimeter() const;
	float getArea(int dummy) const;

	friend istream& operator>>(istream& i, Rect& el);
	friend ostream& operator<<(ostream& o, const Rect& el);
};

