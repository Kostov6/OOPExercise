#pragma once
#include<string>
#include"Observer.h"
using namespace std;
class ConcreteObserver : public Observer
{
	string name;
public:
	ConcreteObserver();
	ConcreteObserver(const string& namePar);

	void update(const string& currency,float rate);
	Observer* clone();

	~ConcreteObserver();
};

