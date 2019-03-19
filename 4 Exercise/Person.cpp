#include "Person.h"
#include <cstring>
#include <iostream>

using namespace std;

Person::Person() : EGN(0) , fN(0) , group(0)
{
	cout << "Constructing..." << endl;
	setName(" ");
	setFamilyName(" ");
}

Person::Person(const char * name,const char * familyName, long long EGN, int fN, int group) 
: EGN(EGN) , fN(fN) , group(group)
{
	cout << "Constructing..." << endl;
	setName(name);
	setFamilyName(familyName);
}


void Person::setName(const char * name)
{
	delete[] this->name;
	int length = strlen(name) + 1;
	this->name = new char[length];
	strcpy_s(this->name,length, name);
}

void Person::setFamilyName(const char * familyName)
{
	delete[] this->familyName;
	int length = strlen(familyName) + 1;
	this->familyName = new char[length];
	strcpy_s(this->familyName, length, familyName);
}

void Person::setEGN(long long EGN)
{
	this->EGN = EGN;
}

void Person::setfN(int fN)
{
	this->fN = fN;
}

void Person::setGroup(int group)
{
	this->group = group;
}

long long Person::getEGN() const
{
	return EGN;
}

int Person::getfN() const
{
	return fN;
}

int Person::getGroup() const
{
	return group;
}

const char * Person::getName() const
{
	return name;
}

const char * Person::getFamilyName() const
{
	return familyName;
}

void Person::print() const
{
	cout << name << endl << familyName << endl << EGN << endl
		<< fN << endl << group;
}

Person::~Person()
{
	cout << "Deleting..."<<endl;
	delete[] name;
	delete[] familyName;
}
