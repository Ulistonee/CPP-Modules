#include "Bureaucrat.hpp"

int 		main()
{
	Bureaucrat		innokentiy(6);

	try
	{
		innokentiy.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << innokentiy;
}