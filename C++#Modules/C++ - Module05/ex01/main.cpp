#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	Ekko("Ekko", 2);
	//std::cout << paper << std::endl;
	try {
	Form		paper("WhitePaper", 1, 0);	
		std::cout << Ekko << std::endl;
		Ekko.signForm(paper);
		Ekko.ReGrade();
	//	Ekko.DeGrade();
		Ekko.signForm(paper);
	}
	catch(const std::exception& exc) {
		std::cerr << exc.what() << std::endl;
	}

	std::cout << Ekko << std::endl;
	
	return (0);
}