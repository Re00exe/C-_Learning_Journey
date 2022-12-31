#include "Span.hpp"

/*--------------------------------------------------------*/
Span::Span (): N(0){}

/*--------------------------------------------------------*/
Span::Span (unsigned int _N): N(_N){}

/*--------------------------------------------------------*/
Span::~Span (){}

/*--------------------------------------------------------*/
Span::Span (const Span &a){
	_arr = a._arr;
	N = a.N;
}

/*--------------------------------------------------------*/

Span & Span::operator = (const Span &a){
	_arr = a._arr;
	N = a.N;
	return (*this);
}

/*--------------------------------------------------------*/

int Span::shortestSpan()
{
    if (_arr.empty())
        throw (std::length_error("#NO shortest span have been found !"));

    int min_val = *std::min_element(_arr.begin(), _arr.end());
    int max_val = *std::max_element(_arr.begin(), _arr.end());

    int min_span = INT_MAX;
    for (std::vector<int>::iterator itr = _arr.begin(); itr != _arr.end(); itr++)
    {
        int val = *itr;
        if (val != min_val && val != max_val)
        {
            min_span = std::min(min_span, val - min_val);
            min_span = std::min(min_span, max_val - val);
        }
    }

    if (min_span == INT_MAX)
        throw (std::overflow_error("#NO shortest span have been found !"));

    return min_span;
}

/*--------------------------------------------------------*/

int	Span::longestSpan(){
	if (_arr.size() < 2)
		throw (std::length_error("#NO Longest span have been found !"));

    int min_val = *std::min_element(_arr.begin(), _arr.end());
    int max_val = *std::max_element(_arr.begin(), _arr.end());

    int max_span = INT_MIN;
    for (std::vector<int>::iterator itr = _arr.begin(); itr != _arr.end(); itr++)
    {
        int val = *itr;
        max_span = std::max(max_span, val - min_val);
        max_span = std::max(max_span, max_val - val);
    }
    return max_span;
}

/*--------------------------------------------------------*/

void Span::addNumber(int num){
	if (_arr.size() == N)
		throw(std::range_error("#You reached the max !!"));
	_arr.push_back(num);
}

std::vector<int>& Span::getArr() { return _arr; } 