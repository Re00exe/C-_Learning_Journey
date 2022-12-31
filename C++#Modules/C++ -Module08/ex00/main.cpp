#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <vector>

int main(void){

  std::deque<int> d;
  std::vector<int> vec;
  for (int i = 1; i <= 10; i++){  
    int val = rand();
    vec.push_back(val);
    d.push_back(val);
  }

  try{
    std::cout << "Searching for element " << vec[5] << " in vec: ";
    std::cout << easyfind(vec, vec[5]) << std::endl;
    std::cout << "Searching for element " << vec[5] << " in d: ";
    std::cout << easyfind(d, vec[5]) << std::endl;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }

  try{
    std::cout << "Searching for element " << -1 << " in vec: ";
    std::cout << easyfind(vec, -1) << std::endl;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }
  try{
    std::cout << "Searching for element " << -1 << " in d: ";
    std::cout << easyfind(d, -1) << std::endl;
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
  }

  return 0;
}
