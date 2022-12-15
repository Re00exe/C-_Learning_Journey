#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(void)
{
	PhoneBook 	p_book;
	std::string	key_word;

	while (1)
	{
		std::cout << "Enter a commands {ADD, SEARCH or EXIT}. : " << std::endl;
		std::getline(std::cin, key_word);
		if (std::cin.eof()) std::cerr << "EOF when reading the command !!!" << std::endl;
		if (!key_word.compare("ADD"))
			p_book.PhoneBook_Add(p_book);
		if (!(key_word.compare("SEARCH")))
			p_book.PhoneBook_Search();
		else if (!(key_word.compare("EXIT")))
			exit (1);
		if (std::cin.eof()) return 1;
	}
    return 0;
}