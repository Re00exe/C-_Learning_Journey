#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>
#include <new>

class Zombie
{
	private:
		std::string	name;
 	public:
		Zombie();
		void 			announce(void);
		void			name_Zomb(std::string name);
    	std::string 	get_name();
		~Zombie ();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
