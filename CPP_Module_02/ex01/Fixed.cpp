#include "Fixed.hpp"

Fixed::Fixed() : m_value(0){
	std::cout << "default constructor called\n";
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "copy constructor called\n";
	*this = other;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called\n";
	m_value = value << bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called\n";
	m_value = roundf(value * (1 << bits));
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
	return ((float)m_value / (1 << bits));
}

int			Fixed::toInt() const{
	return (m_value >> bits);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	this->m_value = other.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}
