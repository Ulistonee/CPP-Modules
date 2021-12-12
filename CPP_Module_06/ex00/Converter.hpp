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
# include <cstdlib>


class Converter
{
public:
	Converter();
	~Converter();
	Converter(const Converter &);
	Converter	&operator=(const Converter &);
	void			converter(char *str);

private:
	void 			printInt(double rep);
	void 			printChar(char *str);
	void 			printDouble(double rep);
	void 			printFloat(double rep);
};

#endif