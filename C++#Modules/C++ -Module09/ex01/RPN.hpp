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

  int ParseToStack(std::string _input);
  int  RpnCalc(int num1, int num2, char _operator);
};
#endif
