#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

class Contact
{
private:
	int					index;
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	int					phone_number;
	std::string			darkest_secret;

public:
	Contact()
	{
		index = 0;
		first_name = "";
		last_name = "";
		nickname = "";
		phone_number = 0;
		darkest_secret = "";
	}
	void	add(int i);
	bool	check_contact(Contact contact);
	void	print();
};

class Phonebook
{
private:
	std::string			cmd;
	Contact				contact[9];

public:
	void			parser();
	int				executor(int index);
	void			search();
};

