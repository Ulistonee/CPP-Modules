#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "default MateriaSource constructor is called\n";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
	}
	std::cout << "assignation MateriaSource operator is called\n";
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
	std::cout << "copy MateriaSource constructor is called\n";
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "default MateriaSource destructor is called\n";

}

void MateriaSource::learnMateria(AMateria *src)
{
	int flag = 0;

	if (!src)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = src;
			break;
		}
		if (i == 3)
			flag = 1;
	}
	if (flag == 1)
		std::cout << "inventory is full\n";
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	int flag;

	flag = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (this->inventory[i])
			flag += 1;
	}
	if (flag == 4)
		return nullptr;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	return nullptr;
}