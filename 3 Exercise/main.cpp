#include <iostream>
using namespace std;

class Rat
{
// classes have private: by default
	int p;
	int q;
public:
	Rat();
	Rat(int par1, int par2);

	Rat multiplyWith(Rat B);
	Rat addWith(Rat B);
	Rat divideWith(Rat B);
	Rat subtractWith(Rat B);

	int getP() const;
	int getQ() const;
	void print() const;

	void setP(int p);
	void setQ(int q);

	void simplify();
	int gcd(int a, int b);
};

Rat::Rat()
{
	p = 1;
	q = 1;
}

Rat::Rat(int par1, int par2)
{
	p = par1;
	q = par2;
	simplify();
}

Rat Rat::multiplyWith(Rat B)
{
	Rat res;
	res.p = p*B.p;
	res.q = q*B.q;

	res.simplify();
	return res;
}



Rat Rat::addWith(Rat B)
{
	Rat res;
	res.p = p*B.q + q*B.p;
	res.q = q*B.q;

	res.simplify();
	return res;
}
Rat Rat::divideWith(Rat B)
{
	Rat res;
	res.p = p*B.q;
	res.q = q*B.p;

	res.simplify();
	return res;
}
Rat Rat::subtractWith(Rat B)
{
	Rat res;
	res.p = p*B.q - q*B.p;
	res.q = q*B.q;

	res.simplify();
	return res;
}


int Rat::getP() const
{
	return p;
}
int Rat::getQ() const
{
	return q;
}

void Rat::setP(int p)
{
	this->p = p;
	simplify();
}

void Rat::setQ(int q)
{
	this->q = q;
	simplify();
}

void Rat::print() const
{
	if (p==0) 
	{
		cout << 0;
	}
	else if (q == 1)
	{
		cout << p;
	}
	else
	{
		cout << p << "/" << q;
	}
	cout << endl;
}

void Rat::simplify()
{
	int NOD = gcd(p, q);
	p /= NOD;
	q /= NOD;
}

int Rat::gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}



int main()
{
	Rat rat1(1, 4), rat2(4, 2);

	rat1.print();
	rat2.print();

	Rat res;
	
	res = rat1.multiplyWith(rat2);

	res.print();
	res.setP(12);
	res.print();

	system("pause");
	return 0;

}

