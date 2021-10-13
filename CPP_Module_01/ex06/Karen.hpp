#ifndef KAREN_H
#define KAREN_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	void karenFilter( std::string level );
};

#endif