#ifndef __ClapTrap_H__
#define __ClapTrap_H__
#include <iostream>

class ClapTrap{
private:
		std::string	name;
		int	hit_pts;
		int	energy;
		int	damage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string _name, int _hit_pts=10, int _energy=10,int _damage=10);
	ClapTrap(const ClapTrap &cpy_player);
	ClapTrap	&operator=(const ClapTrap &player);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif