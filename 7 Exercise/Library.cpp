#include "Library.h"
#include <cstring>


void Library::expand()
{
	//1
	capacity *= 2;
	//2
	Book* tmp = new Book[capacity];
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

int Library::find(const char* name)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(name, elements[i].getName()) == 0)
			return i;
	}
	return -1;
}

Library::Library() : capacity(8), size(0)
{
	elements = new Book[capacity];
}

Library::Library(const Library & cpy) : capacity(cpy.capacity), size(cpy.size)
{
	elements = new Book[capacity];
	for (int i = 0; i < size; i++)
	{
		elements[i] = cpy.elements[i];
	}
}

Library & Library::operator=(const Library & cpy)
{
	if (this != &cpy)
	{
		delete[capacity] elements;

		size = cpy.size;
		capacity = cpy.capacity;
		elements = new Book[capacity];
		for (int i = 0; i < size; i++)
		{
			elements[i] = cpy.elements[i];
		}
	}
	return *this;
}


Library::~Library()
{
	delete[capacity] elements;
}

bool Library::addBook(const Book & book)
{
	if (find(book.getName())>=0)
	{
		return false;
	}
	if (size == capacity)
	{
		expand();
	}
	elements[size] = book;
	size++;
	return true;
}

void Library::removeBook(const char * name)
{
	int index = find(name);
	if (index < 0)
	{
		return;
	}

	elements[index] = elements[size - 1];
	size--;

}

Book & Library::operator[](int index)
{
	return elements[index];
}

bool Library::operator!()
{
	return size==0;
}
