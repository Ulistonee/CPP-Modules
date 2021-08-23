#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

class Contact
{
public:
	std::string			first_name = "";
	std::string			last_name = nullptr;
	std::string			nickname = nullptr;
	int					phone_number=0;
	std::string			darkest_secret;

//public:
//	Contact()
//	{
//		first_name = nullptr;
//		last_name = nullptr;
//		nickname = nullptr;
//		phone_number = 0;
//		darkest_secret = nullptr;
//
//	}
	void	add();
};

class Phonebook
{
public:
//	Phonebook();
//	Phonebook(Phonebook const &arg);
	std::string			cmd;
	Contact				contact[9];

	void	parser();
	int		executor(int index);
	void	search();
};

