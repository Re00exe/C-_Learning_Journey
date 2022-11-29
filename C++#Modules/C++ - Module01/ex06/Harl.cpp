#include"Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl 
	<< "HARL: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl;
}

void	Harl::info(void)
{
		std::cout << "[ INFO ]" << std::endl
		<< "HARL: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void	Harl::warning(void)
{
		std::cout << "[ WARNING ]" << std::endl
		<< "HARL: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
		std::cout << "[ ERROR ]" << std::endl
		<< "HARL: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	str_lvl[4] = {"DEBUG", "INFO","WARNING", "ERROR"};
	int			var=0;


	for(int i=0; i < 4;i++)
	{
		if(str_lvl[i] == level)
		{
			var = i + 1;
			break;
		}	
	}

	switch (var)
	{
	case 1:
		debug();
		break;
	case 2:
		info();
		break;
	case 3:
		warning();
		break;
	case 4:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" <<
		std::endl;
	}
}