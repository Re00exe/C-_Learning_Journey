#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{	
	public:
	    FragTrap ();
	    FragTrap (std::string _name);
	    FragTrap (const FragTrap &a);
	    ~FragTrap ();
	    FragTrap & operator= (const FragTrap &a);
		void	highFivesGuys(void);

};

#endif

