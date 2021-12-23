#include "span.hpp"


Span::Span(unsigned int n) : size(n)
{
}

Span::Span(const Span &other) {
	this->size = other.size;
	std::multiset<int>::const_iterator 		it;
	for(it = other.mySet.begin(); it != other.mySet.end(); ++it)
	{
		this->mySet.insert(*it);
	}
}

Span 		&Span::operator=(const Span &other) {
	if (this != &other)
	{
		this->size = other.size;
		this->mySet.clear();
		std::multiset<int>::const_iterator 	it;
		for(it = other.mySet.begin(); it != other.mySet.end(); ++it)
		{
			this->mySet.insert(*it);
		}
	}
	return (*this);
}

Span::~Span() {
	this->mySet.clear();
}

int 		Span::shortestSpan() {
	std::multiset<int>::const_iterator 		it;
	int 									old;
	int 									min_diff;
	int 									diff;

	if (mySet.size() <= 1)
		throw NotEnoughElements();
	min_diff = *mySet.rbegin() - *mySet.begin();
	old = *mySet.begin();
	for (it = ++mySet.begin(); it != mySet.end() ; ++it)
	{
		diff = *it - old;
		if (min_diff > diff)
		{
			min_diff = diff;
		}
		old = *it;
	}
	return (min_diff);
}

int 		Span::longestSpan() {
	int 								res;

	if (mySet.size() <= 1)
		throw NotEnoughElements();
	res = *mySet.rbegin() - *mySet.begin();
	return (res);
}

void 		Span::addNumber(int n) {
	if (mySet.size() == size)
		throw NotEnoughSpace();
	mySet.insert(n);
}

void		Span::print() {
	std::multiset<int>::const_iterator 		it;

	for (it = mySet.begin(); it != mySet.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "the size of this set is " << mySet.size() << std::endl;
}
