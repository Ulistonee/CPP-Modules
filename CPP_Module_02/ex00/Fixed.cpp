#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "default constructor called\n";
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

void		Fixed::setRawBits(int const raw) {
	value = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	this->value = other.getRawBits();
	return *this;
}