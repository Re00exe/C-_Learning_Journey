#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// return 0;
// }

int main()
{
	Span span(10);

	std::vector<int> range;
	for (int i = 1; i <= 10; i++)
		range.push_back(i);

	std::vector<int>::iterator itr_begin = range.begin();
	std::vector<int>::iterator itr_end = range.end();

	try
	{
		span.AddRangeOfNumbers(itr_begin, itr_end);
	}
	catch (const std::range_error &ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "Array after adding range: ";
	std::vector<int>& arr = span.getArr();
	for (size_t i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

	return 0;
}