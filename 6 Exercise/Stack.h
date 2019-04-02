#pragma once
class Stack
{
	int size;
	int capacity;
	int* elements;

	void expand();
public:
	Stack();
	Stack(const Stack& cpy);
	Stack& operator=(const Stack& cpy);
	~Stack();

	bool isEmpty() const;
	void add(const int& el);
	int pop();

	void print() const;
};

