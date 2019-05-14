#include <iostream>
using namespace std;

class Vehicle
{
	char* mark;
	char* model;
	int maxSpeed;
	int seatCount;

	Vehicle() : maxSpeed(..), seatCount(..)
	{
		setMark(..);
		setModel(..);
	}
	Vehicle(const Vehicle& cpy) : maxSpeed(cpy.maxSpeed), seatCount(copy.seatCount)
	{
		setMark(cpy.mark);
		setModel(cpy.model);
	}
	Vehicle& operator=(const Vehicle& cpy)
	{
		if (this != &cpy)
		{
			seatCount = cpy.seatCount;
			maxSpeed = cpy.maxSpeed;
			setMark(cpy.mark);
			setModel(cpy.model);
		}
		return *this;
	};

	bool operator < (const Vehicle& other)
	{
		return this->maxSpeed < other.maxSpeed;
	}
	//или
	friend bool operator < (const Vehicle& one,const Vehicle& other)
	{
		return one.maxSpeed < other.maxSpeed;
	}
	friend ostream& operator<<(ostream& o, const Vehicle& obj)
	{
		//print
		return o;
	}

	//getters and setters
}

class Car : public Vehicle
{
	char* name;

	Car()
	{

	}
};