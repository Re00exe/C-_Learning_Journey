#include"HumanB.hpp"
#include"Weapon.hpp"

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string	name)
{
	this->name = name;
}


void	HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}