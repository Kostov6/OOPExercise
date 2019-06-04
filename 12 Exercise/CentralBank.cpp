#include "CentralBank.h"
#include <iostream>
using namespace std;


void CentralBank::notify(const string& currency,float rate)
{
	for (int i = 0; i < observers.size(); i++)
	{
		observers[i]->update(currency,rate);
	}
}

CentralBank::CentralBank()
{
}


CentralBank::~CentralBank()
{
}

void CentralBank::addCurrency(const string & currencyPar, float ratePar)
{
	if (find(currencyPar) >= 0)
	{
		//exists
		cout << "Currency already exists";
		return;
	}
	currency.push_back(currencyPar);
	rate.push_back(ratePar);
}

void CentralBank::deleteCurrency(const string & currencyPar)
{
	if (find(currencyPar) == -1)
	{
		//not exists
		cout << "Currency not exists";
		return;
	}
	int index = find(currencyPar);
	currency.erase(currency.begin() + index);
	rate.erase(rate.begin() + index);
	
}

void CentralBank::setRate(const string & currencyPar, float ratePar)
{
	if (find(currencyPar) == -1)
	{
		//not exists
		cout << "Currency does not exists";
		return;
	}
	int index = find(currencyPar);
	rate[index] = ratePar;

	notify(currencyPar,ratePar);
}

void CentralBank::Register(Observer * observer)
{
	if (find(observer) >= 0)
	{
		//exists
		cout << "Err";
		return;
	}
	observers.push_back(observer);
}

void CentralBank::unregister(Observer * observer)
{
	if (find(observer) == -1)
	{
		//not exists
		cout << "Err";
		return;
	}
	int index = find(observer);
	observers.erase(observers.begin() + index);
}
