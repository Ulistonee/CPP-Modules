#ifndef BRAIN_H
#define BRAIN_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>
# include <ctime>

class Brain{
public:
	Brain();
	Brain(const Brain &other);
	virtual ~Brain();
	Brain	&operator=(const Brain &other);


	void 				printIdeas() const;


protected:
	std::string 		getRandomIdea();
	static const int 	ideas_size = 100;
	std::string 		m_ideas[ideas_size];
};

#endif




