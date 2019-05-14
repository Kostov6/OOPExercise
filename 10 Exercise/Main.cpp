#include<iostream>
#include<Windows.h>
using namespace std;


//клас с поне един указател
//за него се пишат всички неща от голямата четворка
class B
{
	char* string;
public:
	B() {}
	B(const B& cpy) { cout << "B copy constructor\n"; }
	B& operator=(const B& cpy) { cout << "B copy operator\n"; }
	~B() {}
	//евентуално(според условието) + конструктор с параметри. По safe е да си го напишете
	B(const char* par1) {}

	//сетери и гетери
	//при сетване на char* : 4 реда код с strcpy (ако го правите с 5 реда е ок)
	//Note: не забравяйте const при гетерите

	//няма const защото променяме obj
	friend istream& operator>>(istream& i, B& obj)
	{
		//използваме буфер
		char buffer[256];
		i >> buffer;
		setString1...
		i >> buffer;
		setString2...

		return i;
	}

	//има const защото не променяме obj при принтене
	friend ostream& operator<<(ostream& o, const B& obj)
	{
		o << obj.asda;
	
		return o;
	}

};

// клас без нито един указател
//за него може да изпуснем copy constructor, copy operator, destructor
class C
{
public:
	C() {}
	//изпускаме constructor, copy operator, destructor
	//евентуално(според условието) + конструктор с параметри. По safe е да си го напишете
	C(...) {}

	//гетери + сетери
};

//наследяване на повече от 1 клас. При наследяването само на 1 клас не е по-различно
//класа има поне един указател
//не забравяйите public
class A : public B, C ...
{
	char* strFromA;
public:
	A() 
		: B() , C() ...
	{}
	//специфика при copy constructor 
	A(const A& cpy) 
		: B(copy) , C(copy) ...
	{
		setStrFromA(cpy.strFromA)
		...
	}
	//специфика при copy operator
	A& operator=(const A& cpy) 
	{
		if (this != &copy)
		{
			B::operator=(cpy);
			C::operator=(cpy);
			....
		}
	}
	~A() {}

	A(parameters)
		: 
};



int main()
{
	A a;
	A b(a);

	system("pause");
	return 0;
}