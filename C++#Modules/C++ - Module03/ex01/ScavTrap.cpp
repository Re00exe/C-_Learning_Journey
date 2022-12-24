#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*-----------------------------------------------------*/
ScavTrap::ScavTrap (){
	std::cout << "[ScavTrap]: Default Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap (std::string _name): ClapTrap(_name){
	hit_pts = 100;
	energy = 50;
	damage = 20;
	
   	std::cout << "[ScavTrap]: " << name << " ScavTrap Constructor has been called " << std::endl;

}
/*-----------------------------------------------------*/
ScavTrap::ScavTrap (const ScavTrap &cpy_player){
   name = cpy_player.name;
   hit_pts = cpy_player.hit_pts;
   energy = cpy_player.energy;
   damage = cpy_player.damage;

   	std::cout << "[ScavTrap]: Copy Constructor has been called " << std::endl;

}

/*-----------------------------------------------------*/
ScavTrap::~ScavTrap (){
	std::cout << "[ScavTrap]: Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
ScavTrap & ScavTrap::operator= (const ScavTrap &player){
    name = player.name;
	hit_pts = player.hit_pts;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[ScavTrap]: Copy Assignement Constructor has been called " << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap]: " << name << " is now in Gatekeeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy && this->hit_pts)
	{
		std::cout << "[ScavTrap]: AAAattack.... " << this->name << " Caused " << target << " "
		<< this->damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else if (!(this->energy))
		std::cout << "#[ScavTrap]: Not enough energy pts"<< std::endl;
	if (!(this->hit_pts))
		std::cout << "#[ScavTrap]: Not enough hit pts to attack " << target << std::endl;

}