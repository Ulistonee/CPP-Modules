#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include <stdexcept>
# include <vector>
# include <list>
# include <set>
# include <map>
# include <algorithm>
# include <iterator>

class Span
{
public:
	Span(unsigned int n);
	Span(const Span& other);
	Span	&operator=(const Span& other);
	~Span();

	void				addNumber(int n);

	template<typename Iterator>
	void				addNumbers(Iterator begin, Iterator end)
	{
		if (this->mySet.size() + std::distance(begin, end) > this->size)
			throw Span::NotEnoughSpace();
		this->mySet.insert(begin, end);
	}
	int 				shortestSpan();
	int					longestSpan();
	void				print();

	class NotEnoughSpace : public std::exception {

	public:
		const char *what() const throw() {
			return "Not enough space";
		};

	};
	class NotEnoughElements : public std::exception {

	public:
		const char *what() const throw() {
			return "Not enough elements";
		};

	};
private:
	unsigned int			size;
	std::multiset<int>		mySet;
};

#endif