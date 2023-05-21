#ifndef __RPN_H__
#define __RPN_H__
#include <iostream>
#include <stack>
#include <string>
#include <cctype>

class RPN {
private:
  std::stack<int> _num_stack;

public:
  RPN();
  RPN(const RPN &a);
  ~RPN();
  RPN &operator=(const RPN &a);

  void ParseToStack(std::string _input);
  int  RpnCalc();
};

#endif
