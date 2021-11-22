#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
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
		if (src.this->inventory[i])
			this->inventory[i] = src.this->inventory[i]->clone();
	}
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	*this = src;
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

void MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = src->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
			break;
		if (this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	return nullptr

