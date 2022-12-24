#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

/*-----------------------------------------------------*/
DiamondTrap::DiamondTrap (){
    std::cout << "[DiamondTrap]: Default Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap (std::string _name){

	DiamondTrap::name = _name;
	ClapTrap::name = _name + "_clap_name";
	hit_pts = 100;
	energy = 50;
	damage = 30;

	std::cout << "[DiamondTrap]: " << _name << " Constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
DiamondTrap::DiamondTrap (const DiamondTrap &player){

	ClapTrap::name = player.ClapTrap::name;
	hit_pts = player.hit_pts;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[DiamondTrap]: Copy Constructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
DiamondTrap::~DiamondTrap (){
    std::cout << "[DiamondTrap]: Destructor has been called" << std::endl;
}

/*-----------------------------------------------------*/
DiamondTrap & DiamondTrap::operator = (const DiamondTrap &player){

    ClapTrap::name = player.ClapTrap::name;
	hit_pts = player.hit_pts;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[DiamondTrap]: Copy Constructor has been called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "[DiamondTrap]: I'm " << name << " AkA " << ClapTrap::name << std::endl;
}