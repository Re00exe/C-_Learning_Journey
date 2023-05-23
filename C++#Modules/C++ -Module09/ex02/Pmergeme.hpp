#ifndef __PMERGEME_H__
#define __PMERGEME_H__
#include <iostream>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <sys/time.h>

class PmergeMe{
public:
    PmergeMe ();
    PmergeMe (const PmergeMe &obj);
    ~PmergeMe ();
    PmergeMe & operator = (const PmergeMe &a);
};

#endif
