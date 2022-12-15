#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__
#include <iostream>
class WrongAnimal{
protected:
		std::string	type;
public:
    WrongAnimal ();
    WrongAnimal (const WrongAnimal &a);
    ~WrongAnimal ();
    WrongAnimal & operator = (const WrongAnimal &a);
	std::string	getType(void) const;
	void	makeSound(void) const;
};


#endif

