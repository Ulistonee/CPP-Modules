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
	int 				i = 10;
	float 				f = 11.0f;
	int *fi = &i;
	float *ff = &f;
//	char 				b;
//	double 				c;
//	a = atof(line.c_str());
//	std::cout << typeid(a).name() << '\n';
//
	fi = reinterpret_cast<int *>(&f);
	ff = reinterpret_cast<float *>(&i);
	ff = static_cast<float*>(&f);
//	c = static_cast<double>(a);
	std::cout << "int: " << i << " type: " << typeid(i).name() <<"\n";
	std::cout << "pointer: " << *fi << "type: " << typeid(fi).name() << '\n';
	std::cout << "float: " << f << " type: " << typeid(f).name()  << '\n';
	std::cout << "pointer: " << *ff << "type: " << typeid(ff).name() << '\n';
//	std::cout << "double: " << c << " type: " << typeid(c).name()  << '\n';
//	std::cout << "float: " << a <<  " type: " << typeid(a).name()  << '\n';
//	printf("%f\n", a);
//	if (!std::isnan(a) && !std::isprint(b) && !std::isinf(a))
//	{
//		std::cout << "char: Non displayable" << std::endl;
//	}
	std::cout << "float size: " << sizeof(f) << "pointer: " << sizeof(ff) << '\n';
	std::cout << "int size: " << sizeof(i) << "pointer: " << sizeof(fi) << '\n';
	std::cout << "double size: " << sizeof (double )<< '\n';
}