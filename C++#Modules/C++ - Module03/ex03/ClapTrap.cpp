#include "ClapTrap.hpp"

/*--------------------------------------------------------*/
ClapTrap::ClapTrap(){
	std::cout << "[ClapTrap]: Default Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap (std::string _name, int _hit_pts, int _energy,int _damage)
: name(_name), hit_pts(_hit_pts), energy(_energy), damage(_damage)
{
	std::cout << "[ClapTrap]: "<< name <<" has been  Constructed " << std::endl;
}

/*--------------------------------------------------------*/
ClapTrap::ClapTrap (const ClapTrap &cpy_player){
    name = cpy_player.name;
	hit_pts = cpy_player.hit_pts;
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
	hit_pts = player.hit_pts;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[ClapTrap]: Copy Assignement Constructor has been called " << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy && this->hit_pts)
	{
		std::cout << "[ClapTrap]: " << this->name << " attacks " << target <<  ", causing "
		<< this->damage << " points of damage!"<< std::endl;
		this->energy--;
	}
	else if (!(this->energy))
		std::cout << "#[ClapTrap]: Not enough energy pts"<< std::endl;
	if (!(this->hit_pts))
		std::cout << "#[ClapTrap]: Not enough hit pts to attack " << target << std::endl;

}

 void	ClapTrap::takeDamage(unsigned int amount)
{
	if  (this->hit_pts)
		hit_pts -= amount;
	if (this->hit_pts <= 0)
	{
		std::cout << "#[ClapTrap]: "<< this->name << " Wasted..." << std::endl; 
		hit_pts = 0;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy)
	{
		this->hit_pts += amount;
		std::cout << "[ClapTrap]: " << this->name << " has been repaired [hit_pts:" << this->hit_pts << "] " << std::endl;
		this->energy--;
	}
	else
		std::cout << "#[ClapTrap]: Not enough energy pts !!!" << std::endl;
}
