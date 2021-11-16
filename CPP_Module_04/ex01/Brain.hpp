#ifndef BRAIN_H
#define BRAIN_H
# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cmath>
# include <cstdio>

class Brain{
public:
	Brain();
	Brain(const Brain &other);
	virtual ~Brain();
	Brain	&operator=(const Brain &other);

	std::string *getMIdeas() const;
	void setMIdeas(std::string *mIdeas);

	const std::string 	*getIdeas() const;
protected:
	static const int ideas_size = 100;
	std::string 		*m_ideas;
};

#endif




