#ifndef __SPAN_H__
#define __SPAN_H__
#include <iostream>

class Span{
private:
    // your privite members here
public:
    Span ();
    Span (const Span &a);
    ~Span ();
    Span & operator = (const Span &a);
};

#endif

