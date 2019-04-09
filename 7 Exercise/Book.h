#pragma once
class Book
{
	char* name = nullptr;
	char* author = nullptr;
	float price;
public:
	Book();
	Book(const char* namePar, const char* authorPar, float pricePar);
	Book(const Book& cpy);
	Book& operator=(const Book& cpy);
	~Book();

	void setPrice(float pricePar);
	void setName(const char* namePar);
	void setAuthor(const char* authorPar);

	float getPrice() const;
	const char* getName() const;
	const char* getAuthor() const;

	friend bool operator<(Book& A, Book& B);
};

