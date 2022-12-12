#include "ClapTrap.hpp"

int main(void){

	ClapTrap player1("Garen");
	ClapTrap player2("Tristana");

	player1.attack("Tristana");
	player2.takeDamage(5);
	player2.beRepaired(10);
	player2.attack("Garen");
	player1.takeDamage(10);

	return (0);
}
