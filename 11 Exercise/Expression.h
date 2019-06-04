#pragma once
class Expression
{
public:
	virtual float value() const = 0;
	virtual void print() const = 0;
	virtual Expression* clone() const = 0;

	virtual ~Expression();
};

