# include <iostream>
# include <cmath>
# include <climits>
#include <sstream>
#include <typeinfo>
#include <stdio.h>
int 		main()
{
//	std::string 		line = "nan";
//
//	int 				x;
//	float 				a;
//	char 				b;
//	double 				c;
//	a = atof(line.c_str());
//	std::cout << typeid(a).name() << '\n';
//
//	x = static_cast<int>(a);
//	b = static_cast<char>(a);
//	c = static_cast<double>(a);
//	std::cout << "int: " << x << " type: " << typeid(x).name()  << '\n';
//	std::cout << "char: " << b << " type: " << typeid(b).name()  << '\n';
//	std::cout << "double: " << c << " type: " << typeid(c).name()  << '\n';
//	std::cout << "float: " << a <<  " type: " << typeid(a).name()  << '\n';
//	printf("%f\n", a);
//	if (!std::isnan(a) && !std::isprint(b) && !std::isinf(a))
//	{
//		std::cout << "char: Non displayable" << std::endl;
//	}
	std::cout << "float size: " << sizeof(float ) << '\n';
	std::cout << "int size: " << sizeof(int) << '\n';
	std::cout << "double size: " << sizeof (double )<< '\n';
}