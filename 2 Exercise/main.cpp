#include <iostream>
using namespace std;

struct Rat
{
	int p;
	int q;

	Rat()
	{
		p = 1;
		q = 1;
	}

	Rat(int par1,int par2)
	{
		p = par1;
		q = par2;
	}
};

Rat multiply(Rat A, Rat B)
{
	Rat res;
	res.p = A.p*B.p;
	res.q = A.q*B.q;
	return res;
}
Rat add(Rat A, Rat B)
{
	Rat res;
	res.p = A.p*B.p + A.q*B.p;
	res.q = A.q*B.q;
	return res;
}
Rat divide(Rat A, Rat B)
{
	Rat res;
	res.p = A.p*B.q;
	res.q = A.q*B.p;
	return res;
}
Rat subtract(Rat A, Rat B)
{
	Rat res;
	res.p = A.p*B.p - A.q*B.p;
	res.q = A.q*B.q;
	return res;
}


int main()
{
	Rat rat1(1,4), rat2(3,5);

	Rat res;
	res = multiply(rat1, rat2);
	cout << res.p << " " << res.q;

	system("pause");
	return 0;

}