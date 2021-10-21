#include "Fixed.hpp"
# include <cmath>


int main(void)
{
//	Fixed		a;
//	Fixed		b(a);
//	Fixed		c;
//
//	c = b;
//	std::cout << a.getRawBits() << std::endl;
//	std::cout << b.getRawBits() << std::endl;
//	std::cout << c.getRawBits() << std::endl;
//_value = round(value * ( 1 << _fractionalBits));
//(float)_value / (1 << _fractionalBits);
	float a = 42.42f;
	int b = round(a * (1 << 8));
	float c = (float)b /(1 << 8);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	printf("c = %f\n", c);

	return 0;
}