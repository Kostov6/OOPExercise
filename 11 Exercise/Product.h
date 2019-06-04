#pragma once
#include "Expression.h"
class Product : public Expression
{
	Expression* lE;
	Expression* rE;
public:
	Product();
	Product(Expression* lEPar, Expression* rEPar);
	Product(const Product& cpy);
	Product& operator=(const Product& cpy);
	~Product();

	void print() const;
	float value() const;

	Expression* clone() const;

};
