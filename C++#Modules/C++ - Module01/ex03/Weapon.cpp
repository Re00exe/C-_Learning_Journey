#include"Weapon.hpp"

Weapon::Weapon(std::string name_wp)
{
	this->type = name_wp;
}

const std::string&	Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
