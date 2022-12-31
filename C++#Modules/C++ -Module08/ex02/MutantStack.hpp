#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__
#include <iostream>
#include <deque>
#include <stack>

template <typename T, typename _C = std::deque<T> >
class MutantStack : public std::stack<T, _C>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack &a) { *this = a; }
	MutantStack &operator=(const MutantStack &a)
	{
		this->c = a.c;
		return (*this);
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }

	reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
	reverse_iterator rend() { return (std::stack<T>::c.rend()); }

	const_iterator cbegin() { return (std::stack<T>::c.cbegin()); }
	const_iterator cend() { return (std::stack<T>::c.cend()); }

	const_reverse_iterator crbegin() { return (std::stack<T>::c.crbegin()); }
	const_reverse_iterator crend() { return (std::stack<T>::c.crend()); }
};

#endif
