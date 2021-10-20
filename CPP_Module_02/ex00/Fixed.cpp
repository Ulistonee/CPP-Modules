#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "default constructor called\n";
	value = 0;
}

Fixed::~Fixed() {
	std::cout << "default constructor terminated" << value << std::endl;
}

int 		Fixed::getRawBits() const {
	return (0);
}

void		Fixed::setRawBits(const int raw) {

}