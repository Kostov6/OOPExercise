#include "Book.h"
#include <cstring>


Book::Book() : price(0)
{
	setName(" ");
	setAuthor(" ");
}

Book::Book(const char * namePar, const char * authorPar, float pricePar) : price(pricePar)
{
	setName(namePar);
	setAuthor(authorPar);
}

Book::Book(const Book & cpy) : price(cpy.price)
{
	setName(cpy.name);
	setAuthor(cpy.author);
}

Book & Book::operator=(const Book & cpy)
{
	if (this != &cpy)
	{
		price = cpy.price;
		setName(cpy.name);
		setAuthor(cpy.author);
	}
	return *this;
}


Book::~Book()
{
	delete[] name;
	delete[] author;
}

void Book::setPrice(float pricePar)
{
	price = pricePar;
}

void Book::setName(const char * namePar)
{
	delete[] name;
	int length = strlen(namePar) + 1;
	name = new char[length];
	strcpy_s(name, length, namePar);
}

void Book::setAuthor(const char * authorPar)
{
	delete[] author;
	int length = strlen(author) + 1;
	author = new char[length];
	strcpy_s(author, length, authorPar);
}

float Book::getPrice() const
{
	return price;
}

const char * Book::getName() const
{
	return name;
}

const char * Book::getAuthor() const
{
	return author;
}


bool operator<(Book & A, Book & B)
{
	return strcmp(A.name,B.name)<0;
}
