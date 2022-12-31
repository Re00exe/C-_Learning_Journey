#ifndef __SPAN_H__
#define __SPAN_H__
#include <iostream>
#include <vector>

class Span
{
private:
   std::vector<int> _arr;
   unsigned int		N;
public:
    Span ();
	Span (unsigned int);
    Span (const Span &a);
    ~Span ();
    Span & operator = (const Span &);

	int shortestSpan();
	int	longestSpan();
	void	addNumber(int);
	template<typename T>
	void AddRangeOfNumbers(T _itr_begin, T _itr_end){

		int len = std::distance(_itr_begin, _itr_end);
    	if ((_arr.size() + len) > N)
    		throw(std::range_error("#You reached the max !!"));
		_arr.reserve(_arr.size() + len);
		std::copy(_itr_begin, _itr_end, std::back_inserter(_arr));
	}
	std::vector<int>& getArr();
};

#endif

