#include "rpn.hpp"

int main(int ac, char **av) {
  RPN obj;
  if (ac != 2) {
    std::cout << "Usage : ./RPN <input RPN_exepression>" << std::endl;
    return 1;
  }
  std::string input = av[1];
  try {
    int res = obj.ParseToStack(input); 
    std::cout << "Result : " << res << std::endl;
  }
  catch (const std::exception& e) {
    std::cout << "Error : " << e.what() << std::endl;
  }

  return 0;
}
