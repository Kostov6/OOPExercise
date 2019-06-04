#pragma once
#include "Expression.h"
class Sum : public Expression
{
	Expression* lE;
	Expression* rE;
public:
	Sum();
	Sum(Expression* lEPar, Expression* rEPar);
	Sum(const Sum& cpy);
	Sum& operator=(const Sum& cpy);
	~Sum();

	void print() const;
	float value() const;

	Expression* clone() const;

};

