#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << a.max(a, b) << std::endl;
	Fixed		n(3);
	Fixed		m(2);
	Fixed		res = n / m;
	std::cout << res << std::endl;

	return 0;
}