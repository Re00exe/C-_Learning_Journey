#include "rpn.hpp"
#include <string>

/*--------------------------------------------------------*/
RPN::RPN() {
}

/*--------------------------------------------------------*/
RPN::RPN(const RPN &a) {
  this->operator=(a);
}

/*--------------------------------------------------------*/
RPN::~RPN() {
}

/*--------------------------------------------------------*/
RPN &RPN::operator=(const RPN &a) {
  (void)a;
  return (*this);
}

int RPN::ParseToStack(std::string input) {
  std::string opr = "*/-+";
  size_t count_opr = 0, num1 = 0, num2 = 0;

  for (size_t i = 0; i < input.length(); i++) {
    if (std::isdigit(input[i])) {
      _num_stack.push(input[i] - '0');
    }
    else if (opr.find(input[i]) != std::string::npos) {
      if (_num_stack.size() < 2)
        throw std::invalid_argument("Not enough Num");
      num2 = _num_stack.top();
      _num_stack.pop();
      num1 = _num_stack.top();
      _num_stack.pop();
      int res = RpnCalc(num1, num2, input[i]);
      _num_stack.push(res);
      count_opr++;
    }
    else if (isspace(input[i]))
      continue;
    else {
      throw std::invalid_argument("Invalid input");
    }
  }
  if (_num_stack.size() != 1)
    throw std::invalid_argument("Invalid exeperssion");
  return (_num_stack.top());
}

int RPN::RpnCalc(int num1, int num2, char _operator){

  switch (_operator) {
  case '+':
    return num1 + num2;
  case '-':
    return num1 - num2;
  case '*':
    return num1 * num2;
  case '/':{
    if (num2 == 0)
      throw std::invalid_argument(" Division par Zero !");
    return num1 / num2;
  }
  default:
    throw std::invalid_argument(" Invalid operator");
    break;
  }
}
