#include "Zombie.hpp"

Zombie	*newZombie (std::string name)
{
    Zombie *zomb;

	zomb = new Zombie;
	zomb->name_Zomb(name);
	return (zomb);
}
