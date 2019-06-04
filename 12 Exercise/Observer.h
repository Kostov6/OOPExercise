#pragma once
class Observer
{
public:

	virtual Observer* clone()=0;
	virtual void update(const string& currency,float rate)=0;
	virtual ~Observer();
};

