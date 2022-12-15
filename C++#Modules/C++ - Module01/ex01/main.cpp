#include "Zombie.hpp"

int	main(void)
{
	Zombie	*ptr_zombies;

	ptr_zombies = zombieHorde(3, "");
	for(int i=0;i < 3;i++)
		ptr_zombies[i].announce();
	delete [] ptr_zombies;
}