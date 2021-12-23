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
# include <stack>
# include "mutantstack.hpp"

int 	main()
{
	std::stack<std::string>			stack;

	stack.push("a");
	stack.push("b");
	stack.push("c");

	std::cout << stack.top() << std::endl;

	MutantStack<int>			a;

	a.push(1);

	MutantStack<int>			b;

	b = a;

	std::cout << b.top() << std::endl;
	return (0);
}

