#ifndef _ITER_H_
# define _ITER_H_

#include <iostream>

template<class A, class B, class C>
void	iter(A* _arr, B len, C f)
{
	for (B i = 0; i < len; i++)
		f(_arr[i]);
}
#endif