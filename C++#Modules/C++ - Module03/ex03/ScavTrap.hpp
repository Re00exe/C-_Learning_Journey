#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
   		ScavTrap ();
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap &a);
    	~ScavTrap ();
    	ScavTrap & operator = (const ScavTrap &a);
		void	guardGate(void);
		void	attack(const std::string& target);
};

#endif
