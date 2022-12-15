#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	    WrongCat ();
	    WrongCat (const WrongCat &_wrongWrongcat);
	    ~WrongCat ();
	    WrongCat & operator = (const WrongCat &_wrongcat);
		void	makeSound(void) const;
};

#endif

