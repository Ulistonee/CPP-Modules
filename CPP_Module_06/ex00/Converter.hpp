#ifndef CONVERTER_H
#define CONVERTER_H
# include <iostream>
# include <cmath>
# include <climits>
# include <cctype>
# include <string>

class Converter
{
public:
	Converter();
	~Converter();
	Converter(const Converter &);
	Converter	&operator=(const Converter &);


	char 			toChar(char *str);
	void			converter(char *);
	bool 			parser(char *str);

private:
	char 			char_rep;
	int				int_rep;
	float 			float_rep;
	double 			double_rep;
};

#endif