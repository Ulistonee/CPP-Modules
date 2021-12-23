#include "span.hpp"

template<typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end)
{
	if (this->mySet.size() + std::distance(begin, end) > this->size)
		throw Span::NotEnoughSpace();
	this->mySet.insert(begin, end);
}