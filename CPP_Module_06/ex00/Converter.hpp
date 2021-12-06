#ifndef CONVERTER_H
#define CONVERTER_H
# include <iostream>
# include <cmath>
# include <climits>
# include <cctype>
# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <cstring>
# include <sstream>


class Converter
{
public:
	Converter();
	~Converter();
	Converter(const Converter &);
	Converter	&operator=(const Converter &);
	void			converter(char *str);
};

#endif