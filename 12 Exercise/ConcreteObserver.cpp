#include "ConcreteObserver.h"
#include<iostream>
using namespace std;


ConcreteObserver::ConcreteObserver() : name("defaultName")
{
}

ConcreteObserver::ConcreteObserver(const string & namePar) : name(namePar)
{
}

void ConcreteObserver::update(const string& currency,float rate)
{
	cout << "Update " << name << ":" << currency << " " << rate << enld;
}

Observer * ConcreteObserver::clone()
{
	return new ConcreteObserver(*this);
}


ConcreteObserver::~ConcreteObserver()
{
}
