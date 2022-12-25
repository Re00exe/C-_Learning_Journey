
#include "Bureaucrat.hpp"

int main()
{
	try {
	Bureaucrat	Yaaso("Yaaso", 1);
	
		std::cout << Yaaso << std::endl;
	//	Yaaso.ReGrade();
	//	Yaaso.DeGrade();
	}
	catch(const std::exception& exc) {
		std::cerr << exc.what() << std::endl;
	}

	//std::cout << Yaaso << std::endl;
	
	return (0);
}