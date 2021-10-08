#include "Replacer.hpp"

int						main(int argc, char **argv)
{
	std::string 		filename;
	std::string 		source;
	std::string 		dst;
	size_t				position;
	std::string 		buf;

	position = 0;
	if (argc != 4)
	{
		std::cout << "Not enough info\n";
		return (1);
	}
	std::ifstream inf(argv[1]);
	if (!argv[0] || !argv[1] || !argv[2] || !inf)
	{
		std::cout << "Wrong arguments\n";
		return (1);
	}
	filename = argv[1];
	source = argv[2];
	dst = argv[3];
	std::ofstream outf(filename.append(".replace"));
	if (!outf)
	{
		std::cout << "Couldn`t create file\n";
		return (1);
	}
	while(!inf.eof())
	{
		getline(inf, buf);
		position = buf.find(source);
		if (position != std::string::npos)
		{
			buf.erase(position, source.size());
			buf.insert(position, dst);
		}
		outf << buf << std::endl;
	}
	inf.close();
	outf.close();
	return 0;
}