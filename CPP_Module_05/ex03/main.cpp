#include "Bureaucrat.hpp"
#include "Intern.hpp"

int			main()
{
	try
	{
		Intern someRandomIntern;
		Form *maison;
		Form *walle;
		Form *sarkozy;
		Form *blender;
		Bureaucrat sean("Sean Paul", 1);

		(void)blender;
		maison 	= someRandomIntern.makeForm("shrubbery creation", "Maison");
		walle 	= someRandomIntern.makeForm("robotomy request", "Wall-E");
		sarkozy = someRandomIntern.makeForm("presidential pardon", "Sarkozy");
		//		blender = someRandomIntern.makeForm("asfdg", "Blender");

		std::cout << sean << std::endl;
		std::cout << *maison << std::endl;
		std::cout << *walle << std::endl;
		std::cout << *sarkozy << std::endl;


		sean.signForm(maison);
		maison->beSigned(sean);

		sean.signForm(walle);
		walle->beSigned(sean);

		sean.signForm(sarkozy);
		sarkozy->beSigned(sean);

		std::cout << *maison << std::endl;
		std::cout << *walle << std::endl;
		std::cout << *sarkozy << std::endl;

		sean.executeForm(*maison);
		maison->execute(sean);

		sean.executeForm(*walle);
		walle->execute(sean);

		sean.executeForm(*sarkozy);

		sarkozy->execute(sean);

		delete maison;
		delete walle;
		delete sarkozy;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);



}