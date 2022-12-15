#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "DEFAULT";
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::name_Zomb(std::string name)
{
	this->name = name;
}

std::string	Zombie::get_name(Zombie zomb)
{
	return (zomb.name);
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie :" << this->name << " Destroyed sucssefully" << std::endl;
}