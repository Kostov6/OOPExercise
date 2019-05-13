#pragma once

template<typename T>
class TemplateTest
{


	TemplateTest(const TemplateTest<T>& cpy);
	TemplateTest<T>& operator=(const TemplateTest<T>& cpy);
};

template<typename T>
inline TemplateTest<T>::TemplateTest(const TemplateTest<T>& cpy)
{

}

template<typename T>
inline TemplateTest<T>& TemplateTest<T>::operator=(const TemplateTest<T>& cpy)
{
	
}
