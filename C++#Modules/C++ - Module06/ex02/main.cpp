#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	std::srand(std::time(NULL));
	int	r = rand() % 3;
	
	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "The object: A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		try
		{
			B& b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "The object: B" << std::endl;
			return ;
		}
		catch(const std::exception& e)
		{
			std::cout << "The object: C" << std::endl;
		}
	}
}

void identify(Base* ptr)
{
	Base *check;

	check = dynamic_cast<A *>(ptr);
	if (check)
	{
		std::cout << "The object: A" << std::endl;
		return;
	}
	check = dynamic_cast<B *>(ptr);
	if (check)
	{
		std::cout << "The object: B" << std::endl;
		return;
	}
	check = dynamic_cast<C *>(ptr);
	if (check)
	{
		std::cout << "The object: C" << std::endl;
		return;
	}
}

int main()
{
	A a;
	B b;
	C c;

	identify(generate());
	identify(&a);
	identify(b);
	identify(c);

}