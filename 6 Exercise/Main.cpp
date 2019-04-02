#include "Person.h"
#include <Windows.h>
#include <iostream>
#include "Stack.h" 
using namespace std;

int main()
{
	Stack a;
	for (int i = 0; i < 16; i++)
		a.add(i);
	a.print();
	Stack b(a);
	b.add(1024);
	b.print();
	a = b;
	a.print();

	system("pause");
	return 0;
}