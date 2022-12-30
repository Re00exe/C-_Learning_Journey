#ifndef _FT_TEMPLATE_H_
# define _FT_TEMPLATE_H_

# include <iostream>

template<class T>
void	swap(T& a, T& b)
{
	T swp(a);

	swp = a;
	a = b;
	b = swp;
}

template<class T>
T&	max(T& a, T& b)
{
	if (a > b)
		return (a);
	return (b);
}

template<class T>
T&	min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

#endif