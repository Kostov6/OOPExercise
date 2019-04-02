#include "Stack.h"
#include <iostream>
using namespace std;


void Stack::expand()
{
	//1
	capacity *= 2;
	//2
	int* tmp = new int[capacity];
	//3
	for (int i = 0; i < size; i++)
	{
		tmp[i] = elements[i];
	}
	//4
	delete[size] elements;
	//5
	elements = tmp;

}

Stack::Stack() : capacity(8) , size(0)
{
	elements = new int[capacity];
}

Stack::Stack(const Stack & cpy) : capacity(cpy.capacity) , size(cpy.size)
{
	elements = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		elements[i] = cpy.elements[i];
	}
}

Stack & Stack::operator=(const Stack & cpy)
{
	if (this != &cpy)
	{
		delete[capacity] elements;

		size = cpy.size;
		capacity = cpy.capacity;
		elements = new int[capacity];
		for (int i = 0; i < size; i++)
		{
			elements[i] = cpy.elements[i];
		}
	}
	return *this;
}



Stack::~Stack()
{
	delete[capacity] elements;
}

bool Stack::isEmpty() const
{
	return size == 0;
}

void Stack::add(const int & el)
{
	if (size == capacity)
	{
		expand();
	}
	elements[size] = el;
	size++;
}

int Stack::pop()
{
	size--;
	if (size < 0)
	{
		size = 0;
		return int();
	}
	return elements[size];
}

void Stack::print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << elements[i];
		cout << endl;
	}
}
