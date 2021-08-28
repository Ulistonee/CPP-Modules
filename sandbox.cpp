#include <iostream>

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	time_t time_in_sec;
	struct tm *current_date;
	char	buffer[80];

	time(&time_in_sec);
	current_date = localtime(&time_in_sec);
	strftime (buffer,80,"[%Y%m%d_%H%M%S]", current_date);
	std::cout << buffer;
}