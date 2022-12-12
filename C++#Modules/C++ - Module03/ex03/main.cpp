#include "DiamondTrap.hpp"

int main(void)
{
	ScavTrap player1("GAREN");
	DiamondTrap player2("Darius");

	player2.whoAmI();
	player1.attack("Darius");
	player2.takeDamage(10);
	player2.attack("GAREN");
	player1.takeDamage(10);
	player2.guardGate();
	
	return (0);
}
