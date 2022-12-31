#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <iostream>
#include <algorithm>

template <typename T>
int&	easyfind(T _conta, int i)
{
	typename T::iterator _itr = std::find(_conta.begin(), _conta.end(), i);
	if (_itr  == _conta.end())
			throw (std::overflow_error("#Element Not Found in container !!! NOT Found !!!"));
	return (*_itr);	
}

#endif

