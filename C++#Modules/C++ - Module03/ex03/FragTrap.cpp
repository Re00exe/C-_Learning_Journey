#include "FragTrap.hpp"

/*-----------------------------------------------------*/
FragTrap::FragTrap (){
    std::cout << "[FragTrap]: Default Constructor has been called " << std::endl;
}

FragTrap::FragTrap (std::string _name):ClapTrap(_name)
{
	health = 100;
	energy = 100;
	damage = 30;

	std::cout << "[FragTrap]: " << _name << "  Constructor has been called " << std::endl;
}
/*-----------------------------------------------------*/
FragTrap::FragTrap (const FragTrap &player){

	name = player.name;
	health = player.health;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[FragTrap]: Copy Constructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
FragTrap::~FragTrap (){
	std::cout << "[FragTrap]: Destructor has been called " << std::endl;
}

/*-----------------------------------------------------*/
FragTrap & FragTrap::operator = (const FragTrap &player){

    name = player.name;
	health = player.health;
	energy = player.energy;
	damage = player.damage;

	std::cout << "[FragTrap]: Copy Assignement Constructor has been called " << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
std::cout <<
  "                       .:.         ^~::~^                       " << std ::endl
<<"                      !:.:~^      ^~    !:                      " << std::endl
<<"                     :!    ~^     !:    :~        ..            " <<std::endl
<<"                     .7     !     ~:    ^^      :^::~:          " <<std::endl
<<"                      !:    7.    7     !:     :~   .7          " <<std::endl
<<"                      :~    ^!   .!     !:     7.   .!          " <<std::endl
<<"                      :!     !:  ^^     !.    ^~    !:          " <<std::endl
<<"                       7     ^^  7.     !    ~^    ~^           " <<std::endl
<<"                       ~^    .!  7      !  .!:    ^~       .:^^:"<<std::endl
<<"                       :!     ^^ 7     ^~  !:    .!      :~^. .7"<<std::endl
<<"                        7.    .! 7     !: ~:    .!.    .~^     7"<<std::endl
<<"                        ^^     ^~~     !:~:     7:    :~.    .!:"<<std::endl
<<"                         7.     .      .^.     ^~   :~:     ^~. "<<std::endl
<<"   .::::::.              !.                   .7  .~^     :~:   "<<std::endl
<<"  ^~    .::^:.           !.                    ^^^^.    ^^:     "<<std::endl
<<"  .~:.      .^^.         !                            .~^       "<<std::endl
<<"    :^^:      .:~^      ~:       ---------           :~.        "<<std::endl
<<"       :^^.      :~^:.:~:       |High-Five|         7:         "<<std::endl
<<"         .~^:      .:::          ---------          :!          "<<std::endl
<<"            :~:                                     !           "<<std::endl
<<"              ^~.                                  :~           "<<std::endl
<<"               .^^.                                ~:           "<<std::endl
<<"                 .~:                               !            "<<std::endl
<<"                   :!                             ~:            "<<std::endl
<<"                    :~:                          ~~             "<<std::endl
<<"                      :^^:.                    .~^              "<<std::endl
<<"                        .:^^^:::...          .^^.               "<<std::endl
<<"                            ...::^^^^^^^^^^^::.  " << std::endl;
}

