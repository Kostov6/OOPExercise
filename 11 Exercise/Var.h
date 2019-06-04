#pragma once
#include "Expression.h"

class Var : public Expression
{
	char* name=nullptr;
	float var;
public:
	Var();
	Var(char* namePar, float varPar);
	Var(const Var& cpy);
	Var& operator=(const Var& cpy);
	~Var();

	void setVar(float varPar);
	void setName(const char* namePar);

	float getVar() const;
	const char* getName() const;

	float value() const;
	void print() const;

	Expression* clone() const;
};

