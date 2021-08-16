#include <iostream>
#include <string>

class Employee
		{
public:
			std::string m_name;
			int			m_id;
			double		m_wage;

			void	print()
			{
				std::cout << "Name: " << m_name << "\nID: " << m_id << "\nWage: $" << m_wage << "\n";
			}
		};

int			main()
{
	Employee john {"John", 5, 30.00};
	Employee max {"Max", 6, 32.75};

	john.print();
	std::cout<<std::endl;
	max.print();

	return 0;
}