#include "stdafx.h"
#include "Product.h"
#include "Const.h"
#include <iostream>

using namespace std;

Product::Product()
{
	lE = new Const(1);
	rE = new Const(1);
}

Product::Product(Expression * lEPar, Expression * rEPar)
{
	lE = lEPar->clone();
	rE = rEPar->clone();
}

Product::Product(const Product & cpy)
{
	lE = cpy.lE->clone();
	rE = cpy.rE->clone();
}

Product & Product::operator=(const Product & cpy)
{
	if (this != &cpy)
	{
		delete lE;
		delete rE;
		lE = cpy.lE->clone();
		rE = cpy.rE->clone();
	}
	return *this;
}


Product::~Product()
{
	delete lE;
	delete rE;
}

void Product::print() const
{
	cout << "(";
	lE->print();
	cout << "*";
	rE->print();
	cout << ")";
}

float Product::value() const
{
	return lE->value() * rE->value();
}

Expression * Product::clone() const
{
	return new Product(*this);
}
