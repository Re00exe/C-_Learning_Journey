#include <stdio.h>
#include <iostream>
#include <stdarg.h>

int main(int ac, char *av[]){
	// std::cout << ac << std::endl;
	int ret = 1;
	for (int i = 1; i < ac; i++){
		if ((strcmp(av[i], "1") == 0) || (strcmp(av[i], "0") == 0)){
			ret *= std::stoi(av[i]);
		}
		else{
			std::cout << "Error !" << std::endl;
			return -1;
		}
	}
	std::cout << ret << std::endl;
	return ret;
}