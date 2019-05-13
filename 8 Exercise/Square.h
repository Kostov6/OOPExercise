#pragma once
#include<iostream>
#include"Shape.h"

using namespace std;
class Square : public Shape
{
protected:
	float a;
public:
	Square();
	Square(float par);
	float getA() const;
	void setA(float par);
	
	float getPerimeter() const;
	float getArea() const;

	friend istream& operator>>(istream& i, Square& el);
	friend ostream& operator<<(ostream& o, const Square& el);

};

