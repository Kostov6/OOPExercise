#include "Person.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{

	char name[16];
	cin >> name;
	if (true)
	{
		Person p1(name, "Goshev", 1, 2, 3);
		p1.print();

		char* tmp = p1.getName();
		tmp[0] = 'F';
		p1.print();
	}
	system("pause");
	return 0;
}