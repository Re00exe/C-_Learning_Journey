#include "MutantStack.hpp"

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }


int main()
{
    MutantStack<int> intStack;

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << "Elements in the stack (forward iteration):" << std::endl;
    for (MutantStack<int>::iterator it = intStack.begin(); it != intStack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "Elements in the stack (reverse iteration):" << std::endl;
    for (MutantStack<int>::reverse_iterator it = intStack.rbegin(); it != intStack.rend(); ++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}