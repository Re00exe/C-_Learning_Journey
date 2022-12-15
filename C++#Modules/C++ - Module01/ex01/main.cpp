#include "Zombie.hpp"

int	main(void)
{
	Zombie	*ptr_zombies;

	ptr_zombies = zombieHorde(5, "name");
	if (!ptr_zombies)
		return (0);
	for(int i=0;i < 5;i++)
		ptr_zombies[i].announce();
	delete [] ptr_zombies;
	return (1);
}