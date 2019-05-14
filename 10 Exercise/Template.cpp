
template<class T>
class Pair
{
	char* key;
	T value;
	void setKey(const char* par);
public:

	Pair();
	Pair(const char* keyPar, T valuePar);
	Pair(const Pair<T>& cpy);
	Pair& operator=(const Pair<T>& cpy);
	~Pair();

	const char* getKey() const;
	T getValue() const;
	void setValue(T newValue);

};

template<class T>
void Pair<T>::setKey(const char * par)
{
	//4 reda kod 
}

template<class T>
Pair<T>::Pair()
{
	setKey("");
}

template<class T>
Pair<T>::Pair(const char * keyPar, T valuePar) : value(valuePar)
{
	setKey(keyPar);
}

template<class T>
Pair<T>::Pair(const Pair & cpy) : value(copy.value)
{
	setKey(cpy.key);
}

template<class T>
Pair & Pair<T>::operator=(const Pair & cpy)
{
	if (this != &cpy)
	{
		value = cpy.value;
		setKey(cpy.key);
	}
	return *this;
}

template<class T>
Pair<T>::~Pair()
{
	delete key;
}

template<class T>
const char * Pair<T>::getKey() const
{
	return key;
}

template<class T>
T Pair<T>::getValue() const
{
	return value;
}

template<class T>
void Pair<T>::setValue(T newValue)
{
	value = newValue;
}

template<class T>
class Setting
{
	int size;
	int capacity;
	Pair<T>* elements;
	void expand();
public:

	void add(const Pair<T>& newEl)
	{
		if (size == capacity)
			expand();
		elements[size] = newEl;
		size++;
	}

	...
};


Pair<int> test;
Pair<Point>
Pair<char>
Pair<vector<int>>