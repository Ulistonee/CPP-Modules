#ifndef FIXED_H
#define FIXED_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>

class Fixed
		{
public:
			Fixed();
			Fixed(const Fixed &other);
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );
private:
			int 					value;
			static const int		bits = 8;
		};

#endif