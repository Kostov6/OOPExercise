#include <iostream>

using namespace std;

int fib(int n)
{
	int Fib[1024];
	Fib[0] = 1;
	Fib[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	return Fib[n];
}

void fib2(int n, int &res)
{
	int Fib[1024];
	Fib[0] = 1;
	Fib[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	res = Fib[n];
}
int main()
{
	int a = 5;
	cout <<"a: value - "<< a << "| address - " << &a << endl;
	a = 7;
	cout << "a: value - " << a << "| address - " << &a << endl;
	int *b = &a;

	cout << "b: value - " << b << "| address - " << &b << "| *b: " << *b << endl;
	*b = 10;
	cout << "*b=10 \n";
	cout << "a: value - " << a << "| address - " << &a << endl;
	cout << "b: value - " << b << "| address - " << &b << "| *b: " << *b << endl;

	cout << "Fibonachi\n";
	cout << fib(4)<<endl;

	int promenlivaNaKolega=-1231241;
	fib2(4, promenlivaNaKolega);
	cout << promenlivaNaKolega;
	return 0;
}

