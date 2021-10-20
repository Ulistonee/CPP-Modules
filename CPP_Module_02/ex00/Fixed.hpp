#ifndef FIXED_H
#define FIXED_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>

class Fixed
		{
public:
			Fixed();
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );
private:
			int 					value;
			const static int		bits;
		};

#endif