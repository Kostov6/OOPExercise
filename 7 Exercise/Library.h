#pragma once
#include "Book.h"
class Library
{
	int size;
	int capacity;
	Book* elements;

	void expand();
	int find(const char* name);
public:
	Library();
	Library(const Library& cpy);
	Library& operator=(const Library& cpy);
	~Library();

	bool addBook(const Book& book);
	void removeBook(const char* name);

	Book& operator[](int index);
	bool operator!();
};

