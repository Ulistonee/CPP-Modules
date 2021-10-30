#ifndef FIXED_H
#define FIXED_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	Fixed		&operator=(const Fixed &other);
	bool		operator>(const Fixed &other);
	bool		operator<(const Fixed &other);
	bool		operator>=(const Fixed &other);
	bool		operator<=(const Fixed &other);
	bool 		operator==(const Fixed &other);
	bool		operator!=(const Fixed &other);
	Fixed		operator+(const Fixed &other);
	Fixed		operator-(const Fixed &other);
	Fixed		operator*(const Fixed &other);
	Fixed		operator/(const Fixed &other);
	Fixed		&operator++();
	Fixed		&operator--();
	Fixed		&operator++(int);

	float		toFloat( void ) const;
	int 		toInt(void) const;
private:
	int 					m_value;
	static const int		bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & fixed);

#endif