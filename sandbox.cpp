#include <iostream>

struct DateStruct
		{
	int		day;
	int		month;
	int		year;
		};

class DateClass
		{
public:
			int		m_day;
			int		m_month;
			int		m_year;

			void		print(DateStruct &date)
			{
				std::cout << m_day << "/" << m_month << "/" << m_year << "\n";
			}
		};

int			main()
{
	DateClass today {19,8,1991};

	today.m_day = 20;
	today.print();
	return (0);
}