#pragma once
#include "Expression.h"

class Const : public Expression
{
	float constV;
public:
	Const();
	Const(float constV);

	float getConst() const;
	
	float value() const;
	void print() const;

	Expression* clone() const;
};

