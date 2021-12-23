#ifndef EASYFIND_HPP
#define EASYFIND_HPP
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

class ElementNotFound : public std::exception {

public:
	const char *what() const throw() {
		return "Element not found";
	};

};

template<typename T>
typename T::iterator easyfind(T& container, int value) {
	typename T::iterator it;
	it = find(container.begin(), container.end(), value);
	if (it == container.end())
		throw ElementNotFound();
	return it;
}

#endif