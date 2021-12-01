#ifndef CONVERTER_H
#define CONVERTER_H
# include <iostream>
# include <cmath>
# include <climits>

class Converter
{
public:
	Converter();
	~Converter();
	Converter(const Converter &);
	Converter	&operator=(const Converter &);
	char 		toChar(char *str);
	void		converter(char *str);

private:

};

#endif