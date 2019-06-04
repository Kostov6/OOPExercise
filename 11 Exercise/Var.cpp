#include "stdafx.h"
#include "Var.h"
#include <cstring>
#include<iostream>

using namespace std;

Var::Var() : var(1)
{
	setName("var");
}

Var::Var(char * namePar, float varPar) : var(varPar)
{
	setName(namePar);
}

Var::Var(const Var & cpy) : var(cpy.var)
{
	setName(cpy.name);
}

Var & Var::operator=(const Var & cpy)
{
	if (this != &cpy)
	{
		setName(cpy.name);
		setVar(cpy.var);
	}
	return *this;
}


Var::~Var()
{
	delete[] name;
}

void Var::setVar(float varPar)
{
	var = varPar;
}

void Var::setName(const char * namePar)
{
	delete[] name;
	int length = strlen(namePar)+1;
	name = new char[length];
	strcpy_s(name, length, namePar);
}

float Var::getVar() const
{
	return var;
}

const char * Var::getName() const
{
	return name;
}

float Var::value() const
{
	return var;
}

void Var::print() const
{
	cout << name;
}

Expression * Var::clone() const
{
	return new Var(*this);
}
