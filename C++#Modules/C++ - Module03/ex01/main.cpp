#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap player1("GAREN");
	ScavTrap player2("Tristana");

	player1.attack("Tristana");
	player2.takeDamage(10);
	player2.beRepaired(20);
	player2.attack("GAREN");
	player1.takeDamage(10);
	player1.beRepaired(10);
	player2.guardGate();
	player1.attack("Tristana");
	return (0);
}