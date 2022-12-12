#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public FragTrap ,public ScavTrap
{
	private:
	    std::string	name;
	public:
	    DiamondTrap ();
		DiamondTrap (std::string _name);
	    DiamondTrap (const DiamondTrap &player);
	    ~DiamondTrap ();
	    DiamondTrap & operator = (const DiamondTrap &player);
		void	attack(const std::string &target);
		void	whoAmI(void);
};

#endif

