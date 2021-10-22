#include "Fixed.hpp"



int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
//	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
//_value = round(value * ( 1 << _fractionalBits));
//(float)_value / (1 << _fractionalBits);
//	float a = 42.42f;
//	int b = round(a * (1 << 8));
//	float c = (float)b /(1 << 8);
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	printf("c = %f\n", c);
//	int num = 4;
//	float res;
//
//	res = num >> 8;
//	printf("res - %f\n", res);

	return 0;
}