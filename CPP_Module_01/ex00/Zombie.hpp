#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>
# include <cstdlib>

class Zombie
{
private:
	std::string			name;
	int					age;
	int					weight;

	bool				CheckBrain()
	{
		return true;
	}
public:
	Zombie(std::string valueName, int valueAge, int valueWeight)
	{
		name = valueName;
		age = valueAge;
		weight = valueWeight;
	}

	void				Alive();
	int					Sum(int a, int b);
	double 				Sum(double a, double b);
	void				Print();

};

#endif