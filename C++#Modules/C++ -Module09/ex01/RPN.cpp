#include "RPN.hpp"
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

void RPN::ParseToStack(std::string input) {
  std::string opr = "*/-+";
  size_t pos, num;

  for (ssize_t i; i < input.length(); i++) {
    if (std::isdigit(input[i])) {
      this->_num_stack.push(input[i]);
    }
    else if (opr.find(input[i]) != std::string::npos) {
      this->
    }
  }
}
