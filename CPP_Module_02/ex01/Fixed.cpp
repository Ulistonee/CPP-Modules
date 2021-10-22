#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "default constructor called\n";
	m_value = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "copy constructor called\n";
	*this = other;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called " << this << std::endl;
	m_value = value << bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called " << this << std::endl;
	m_value = round(value * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "destructor called\n";
}

int 		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (m_value);
}

void		Fixed::setRawBits(const int raw) {
	m_value = raw;
}

float 		Fixed::toFloat() const {
	return (float)m_value / (1 << bits);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called " << this << std::endl;
	this->m_value = other.m_value;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();

	return o;
}