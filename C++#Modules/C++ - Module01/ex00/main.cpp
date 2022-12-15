#include "Zombie.hpp"

int main(void)
{
    Zombie *zomb;

	zomb = newZombie("zombiyyyyyy");
    zomb->announce();
	randomChump("reogine");
	delete zomb;
	return 0;
}
