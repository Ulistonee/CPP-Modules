#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& src);
	MateriaSource(const MateriaSource& src);


	void 		learnMateria(AMateria*);
	AMateria* 	createMateria(std::string const & type);


private:
	AMateria* inventory[4];
};