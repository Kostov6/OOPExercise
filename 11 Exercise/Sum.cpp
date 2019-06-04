#include "stdafx.h"
#include "Sum.h"
#include "Const.h"
#include <iostream>

using namespace std;

Sum::Sum()
{
	lE = new Const(1);
	rE = new Const(1);
}

Sum::Sum(Expression * lEPar, Expression * rEPar)
{
	lE = lEPar->clone();
	rE = rEPar->clone();
}

Sum::Sum(const Sum & cpy)
{
	lE = cpy.lE->clone();
	rE = cpy.rE->clone();
}

Sum & Sum::operator=(const Sum & cpy)
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


Sum::~Sum()
{
	delete lE;
	delete rE;
}

void Sum::print() const
{
	cout << "(";
	lE->print();
	cout << "+";
	rE->print();
	cout << ")";
}

float Sum::value() const
{
	return lE->value() + rE->value();
}

Expression * Sum::clone() const
{
	return new Sum(*this);
}
