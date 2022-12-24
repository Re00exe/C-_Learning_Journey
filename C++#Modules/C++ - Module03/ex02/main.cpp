#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap player1("GAREN");
	ScavTrap player2("Tristana");
	FragTrap player3("Yuumi");

	player1.attack("Tristana");
	player2.takeDamage(10);
	player3.attack("GAREN");
	player1.takeDamage(10);
	player2.guardGate();
	player3.highFivesGuys();
	return (0);
}
