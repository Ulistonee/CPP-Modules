#ifndef TEMPLATE_H
#define TEMPLATE_H
# include <iostream>

template <typename T>

void 		swap(T & a, T & b)
{
	T 		swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename T>

T const			&min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template <typename T>

T const			&max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

#endif