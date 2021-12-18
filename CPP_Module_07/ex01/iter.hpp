#ifndef ITER_H
#define ITER_H
# include <iostream>
# include <typeinfo>
# include <math.h>

template<typename T>

void 		iter(T *array, unsigned int length, void (*f)(T &item))
{
	for (unsigned int i = 0; i < length; ++i)
		f(array[i]);
}


template<typename T>

void		square(T item)
{
	if (typeid(item) == typeid(char))
	{
		std::cout << "char can`t be squared" << std::endl;
		return;
	}
	else
	{
		item = pow(item, 2);
		std::cout << "square is " << item << std::endl;
	}
}

template<typename T>

void 		print(T &item)
{
	std::cout << item << std::endl;
}

#endif