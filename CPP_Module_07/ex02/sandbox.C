# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include <stdexcept>
# include <typeinfo>

template <typename T>

T & max(T & x, T & y)
{
	return (x >= y ? x : y);
}


int 	main()
{
	int 	*a = new int();

	std::cout << *a << std::endl;

	return 0;
}