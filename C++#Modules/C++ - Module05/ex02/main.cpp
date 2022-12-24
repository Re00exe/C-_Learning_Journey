#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	Ekko("Ekko", 1);
	Form		paper("WhitePaper", 2, 1);	
	//std::cout << paper << std::endl;
	try {
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