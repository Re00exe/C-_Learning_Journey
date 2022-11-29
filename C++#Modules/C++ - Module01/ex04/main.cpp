#include<iostream>
#include<iomanip>
#include<fstream>

int	ft_replace(std::string &str, std::string to_rep, std::string rep)
{
	std::size_t	pos;

	pos = str.find(to_rep);
	if (pos!=std::string::npos)
	{
		
		str.erase(pos, to_rep.size());
		str.insert(pos, rep);
		return(1);
	}
	return(0);
}

int main(int ac, char** av)
{
	std::fstream	out_file;
	std::fstream	in_file;
	std::string		str_rep;	
	int		n=0;

	if (ac == 4)
	{
		std::string str(av[1]);
		in_file.open(av[1], std::ios::in);
		out_file.open(str += ".replace", std::ios::out | std::ios::ate);
		if (!in_file)
			std::cout << "#No such File" << av[1]<< std::endl;
		else if (!out_file)
			std::cout << "#Faild to open: " <<  str  << std::endl;
		else
		{
			while (std::getline(in_file, str_rep))
			{
				if (!str_rep.empty())
				{
					n += ft_replace(str_rep , av[2], av[3]);
					out_file << str_rep;
				}
				if (!in_file.eof())
					out_file << std::endl;
			}
			if (!n)
				std::cout << "#No match of " << av[2] << " in your file" << std::endl;
		}
		out_file.close();
	}
	return (0);
}