#include "Replacer.hpp"

int						main(int argc, char **argv)
{
	std::string 		filename;
	std::string 		s1;
	std::string 		s2;
	size_t				position = 0;
	std::string 		buf;
	std::string 		tmp;
	size_t 				start = 0;
	int 				count = 0;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	std::ifstream inf(argv[1]);
	if (!inf)
	{
		std::cout << "Error with input file\n";
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ofstream outf(filename.append(".replace"));
	if (!outf)
	{
		std::cout << "Error with output file\n";
		return (1);
	}
	while (!inf.eof())
	{
		getline(inf, tmp);
		buf.append(tmp);
		buf.append("\n");
	}
	while (count < buf.size())
	{
		position = buf.find(s1, start);
		if (position != std::string::npos)
		{
			buf.erase(position, s1.size());
			buf.insert(position, s2);
			start += position + s2.size();
		}
		count++;
	}
	outf << buf;
	inf.close();
	outf.close();
	return 0;
}