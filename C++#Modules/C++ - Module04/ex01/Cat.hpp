#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_my_brain;
	public:
	    Cat ();
	    Cat (const Cat &a);
		~Cat ();
	    Cat & operator = (const Cat &a);
		virtual	void	makeSound(void) const;
};

#endif

