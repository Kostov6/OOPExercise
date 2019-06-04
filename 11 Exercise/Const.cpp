#include "stdafx.h"
#include "Const.h"
#include<iostream>
using namespace std;

Const::Const()
{
	constV = 1;
}

Const::Const(float constV)
{
	this->constV = constV;
}

float Const::getConst() const
{
	return constV;
}

float Const::value() const
{
	return constV;
}

void Const::print() const
{
	cout << constV;
}

Expression * Const::clone() const
{
	return new Const(*this);
}
