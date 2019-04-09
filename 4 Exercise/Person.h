#pragma once
class Person
{
private:
	char* name=nullptr;
	char* familyName=nullptr;

	long long EGN;
	int fN;
	int group;
public:
	Person();
	Person(const char* name,const char* familyName, long long EGN, int fN, int group);

	void setName(const char* name);
	void setFamilyName(const char* familyName);
	void setEGN(long long EGN);
	void setfN(int fN);
	void setGroup(int group);

	long long getEGN() const;
	int getfN() const;
	int getGroup() const;

	const char* getName() const;
	const char* getFamilyName() const;

	void print() const;

	~Person();
};

