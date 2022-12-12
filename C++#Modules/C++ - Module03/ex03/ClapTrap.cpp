#include "ClapTrap.hpp"

/*--------------------------------------------------------*/
ClapTrap::ClapTrap(){
	std::cout << "[ClapTrap]: Default Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap (std::string _name, int _health, int _energy,int _damage)
: name(_name), health(_health), energy(_energy), damage(_damage)
{
	std::cout << "[ClapTrap]: "<< name <<" has been  Constructed " << std::endl;
}

/*--------------------------------------------------------*/
ClapTrap::ClapTrap (const ClapTrap &cpy_player){
    name = cpy_player.name;
	health = cpy_player.health;
	energy = cpy_player.energy;
	damage = cpy_player.damage;

	std::cout << "[ClapTrap]: Copy Constructor has been called " << std::endl;
	
}

/*--------------------------------------------------------*/
ClapTrap::~ClapTrap (){
	std::cout << "[ClapTrap]: Destructor has been called " << std::endl;
}

/*--------------------------------------------------------*/
ClapTrap & ClapTrap::operator = (const ClapTrap &player){
    name = player.name;
	health = player.health;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[ClapTrap]: Copy Assignement Constructor has been called " << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy && this->health)
	{
		std::cout << "[ClapTrap]: " << this->name << " attacks " << target <<  ", causing "
		<< this->damage << " points of damage!"<< std::endl;
		this->energy--;
	}
	else if (!(this->energy))
		std::cout << "#[ClapTrap]: Not enough energy pts"<< std::endl;
	if (!(this->health))
		std::cout << "#[ClapTrap]: Not enough hit pts to attack " << target << std::endl;

}

 void	ClapTrap::takeDamage(unsigned int amount)
{
	if  (this->health)
		health -= amount;
	if (this->health <= 0)
	{
		std::cout << "#[ClapTrap]: "<< this->name << " Wasted..." << std::endl; 
		health = 0;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy)
	{
		this->health += amount;
		std::cout << "[ClapTrap]: " << this->name << " has been repaired [health:" << this->health << "] " << std::endl;
		this->energy--;
	}
	else
		std::cout << "#[ClapTrap]: Not enough energy pts !!!" << std::endl;
}
