#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__
#include <iostream>

class MutantStack{
private:
    // your privite members here
public:
    MutantStack ();
    MutantStack (const MutantStack &a);
    ~MutantStack ();
    MutantStack & operator = (const MutantStack &a);
};

#endif

