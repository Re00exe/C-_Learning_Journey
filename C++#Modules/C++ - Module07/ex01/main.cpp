#include"Iter.hpp"
#include<iostream>

void printInt(int x)
{
    std::cout << x << " ";
}

void printChar(char c)
{
    std::cout << c << " ";
}

int main()
{
    int arrInt[] = {1, 2, 3, 4, 5};
    iter(arrInt, 5, printInt);
    std::cout << std::endl;

    char arrChar[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arrChar, 5, printChar);
    std::cout << std::endl;

    return 0;
}