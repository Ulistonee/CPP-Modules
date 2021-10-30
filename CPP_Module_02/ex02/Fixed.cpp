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
	return (float)(m_value / (1 << bits));
}

int			Fixed::toInt() const{
	return (m_value >> bits);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called " << this << std::endl;
	this->m_value = other.m_value;
	return *this;
}

bool Fixed::operator==(const Fixed &other)
{
	return (this->m_value == other.m_value);
}

bool Fixed::operator!=(const Fixed &other)
{
	return (this->m_value != other.m_value);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->m_value > other.m_value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->m_value < other.m_value);
}

bool Fixed::operator<=(const Fixed &other)
{
	return (this->m_value <= other.m_value);
}

bool Fixed::operator>=(const Fixed &other)
{
	return (this->m_value >= other.m_value);
}

Fixed Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator++() {
	this->m_value++;
	return *this;
}

Fixed	Fixed::operator--() {
	this->m_value--;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	this->m_value++;
	return temp;
}

Fixed	Fixed::operator--(int) {
	Fixed		temp(*this);

	this->m_value--;
	return temp;
}

Fixed	&Fixed::min(Fixed &value1, Fixed &value2) {
	if (value1 > value2)
		return value2;
	else
		return value1;
}

Fixed	&Fixed::max(Fixed &value1, Fixed &value2) {
	if (value1 > value2)
		return value1;
	else
		return value2;
}

Fixed	 const &Fixed::min(const Fixed &value1, const Fixed &value2) {
	if (value1 > value2)
		return value2;
	else
		return value1;
}

Fixed	 const &Fixed::max(const Fixed &value1, const Fixed &value2) {
	if (value1 > value2)
		return value1;
	else
		return value2;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}