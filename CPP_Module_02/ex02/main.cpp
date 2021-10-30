#include "Fixed.hpp"

int main(void)
{
	Fixed a;
//	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed b(6);
	Fixed c(3);
//	bool result = a != b;
	float n = 2.2;

	n++;
	std::cout << n << std::endl;


	a++;
	std::cout << a << std::endl;



//	std::cout << result << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;

//	std::cout << b << std::endl;
//	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}