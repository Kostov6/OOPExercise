#pragma once
#include<string>
#include<vector>
#include"Observer.h"
using namespace std;
class CentralBank
{
	string name;
	vector<string> currency;
	vector<float> rate;
	vector<Observer*> observers;

	void notify(const string& currencyPar, float ratePar);
	int find(const string& name);
	int find(Observer* obs);
public:
	CentralBank();
	CentralBank(const string& namePar);
	CentralBank(const CentralBank&);
	CentralBank& operator=(const CentralBank&);
	~CentralBank();

	void addCurrency(const string& currencyPar, float ratePar);
	void deleteCurrency(const string& currencyPar);
	void setRate(const string& currencyPar, float ratePar);

	void Register(Observer* observer);
	void unregister(Observer* observer);
};

