#include"HumanB.hpp"
#include"Weapon.hpp"

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " #Can't Attacks he have no Weapon !" << std::endl;
}

HumanB::HumanB(std::string	name)
{
	this->name = name;
	this->weapon = nullptr;
}


void	HumanB::setWeapon(Weapon &new_weapon)
{
		this->weapon = &new_weapon;
}