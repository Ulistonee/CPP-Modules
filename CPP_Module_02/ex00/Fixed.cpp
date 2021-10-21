#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "default constructor called\n";
	value = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "copy constructor called\n";
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "destructor called\n";
}

int 		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (value);
}

void		Fixed::setRawBits(const int raw) {
	value = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called " << this << std::endl;
	this->value = other.value;
	return *this;
}