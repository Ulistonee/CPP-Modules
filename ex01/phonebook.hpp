#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

class Contact
{
public:
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	int					phone_number;
	std::string			darkest_secret;

	void	add();
};

class Phonebook
{
public:
//	Phonebook();
//	Phonebook(Phonebook const &arg);
	std::string			cmd;
	Contact				Azat;
	Contact				Aizhan;

	void	parser();
	int		executor(Contact &data) const;
};

