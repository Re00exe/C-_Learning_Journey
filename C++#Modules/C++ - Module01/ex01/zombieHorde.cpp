#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie	*zH = new Zombie[N];

		for(int i=0;i<N;i++)
			zH[i].name_Zomb(name);
		return (zH);
	}
	else
		std::cout << "# Allocation ERROR !!" <<std::endl;
	return (nullptr);
}