#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{
	std::cout << "----------------------------------\n";
	std::cout << "creating MateriaSource\n";
	std::cout << "----------------------------------\n";

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "----------------------------------\n";
	std::cout << "creating new Character\n";
	std::cout << "----------------------------------\n";

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "----------------------------------\n";
	std::cout << "equipped the Character\n";
	std::cout << "----------------------------------\n";
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "----------------------------------\n";
	std::cout << "used it on bob\n";
	std::cout << "----------------------------------\n";

	delete bob;
	delete me;
	delete src;
	delete tmp;


	std::cout << "----------------------------------\n";
	std::cout << "trying to learn more materia than inventory size can contain" << std::endl;
	std::cout << "----------------------------------\n";


	IMateriaSource* mSource = new MateriaSource();

	mSource->learnMateria(new Ice());
	mSource->learnMateria(new Cure());
	AMateria* tmp2;
	AMateria* tmp3;
	tmp2 = mSource->createMateria("ice");
	tmp3 = mSource->createMateria("cure");

	mSource->learnMateria(tmp2);
	mSource->learnMateria(tmp3);
	mSource->learnMateria(NULL); // this must not segfault
	mSource->learnMateria(tmp2);
//	mSource->learnMateria(tmp3);
//	mSource->learnMateria(tmp3);



	ICharacter* alice = new Character("alice");
	ICharacter* mallory = new Character("mallory");


	std::cout << "----------------------------------\n";
	std::cout << "trying to equip more materia than inventory size can contain" << std::endl;
	std::cout << "----------------------------------\n";

	alice->equip(tmp2);
	alice->equip(tmp3);
	alice->equip(tmp2);
	alice->equip(tmp3);
	alice->equip(tmp2); // can't be equipped
	alice->equip(tmp3);
	for (int i = 0; i < 4; i++)
		alice->use(i, *mallory);
	delete alice;
	delete mallory;
	delete mSource;
	return 0;
}