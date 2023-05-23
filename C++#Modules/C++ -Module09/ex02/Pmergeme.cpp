#include "Pmergeme.hpp"
#include <algorithm>
#include <sys/time.h>

/*--------------------------------------------------------*/
PmergeMe::PmergeMe() {
}

/*--------------------------------------------------------*/
PmergeMe::PmergeMe(const PmergeMe &obj) {
  this->operator=(obj);
}

/*--------------------------------------------------------*/
PmergeMe::~PmergeMe() {
}

/*--------------------------------------------------------*/
PmergeMe &PmergeMe::operator=(const PmergeMe &a) {
  (void)a;
  return (*this);
}
