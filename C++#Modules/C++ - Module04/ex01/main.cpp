#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();


	// delete j;
	// delete i;

	int num = 2;
	Animal **animal_arr = new Animal*[num];

	for (int i=0; i < num; i++)
	{
		animal_arr[i] = new Dog();
		i++;
		animal_arr[i] = new Cat();
	}

	animal_arr[0]->

	for (int i=0; i<num ; i++)
	 	delete  animal_arr[i];	
	return 0;
}