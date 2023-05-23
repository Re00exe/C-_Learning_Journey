#include "Pmergeme.hpp"
#include <cstdlib>

bool hasExtraValue = false;
unsigned int extraValue;

void checkInput(const char *arg1, const char *arg2) {
  if (std::atoi(arg1) < 0 || std::atoi(arg2) < 0) {
    std::cerr << "Error: Invalid Input: Number Less than 0 \n";
    exit(0);
  }
}

template <typename T, typename S, typename V>

void proccessValues(int count, T &container, S &cont, V &conta, char choice) {
  timeval start, end;
  long seconds, microseconds; gettimeofday(&start, NULL);
  for (size_t i = 0; i < container.size(); i++) {
    if (container[i].first > container[i].second)
      std::swap(container[i].first, container[i].second);
  }
  for (size_t i = 0; i < container.size(); i++)
    conta.push_back(container[i].first);

  for (size_t i = 0; i < container.size(); i++)
    cont.push_back(container[i].second);

  std::sort(conta.begin(), conta.end());

  for (size_t i = 0; i < cont.size(); i++)
    conta.insert(std::lower_bound(conta.begin(), conta.end(), cont[i]),
                 cont[i]);
  if (hasExtraValue)
    conta.insert(std::lower_bound(conta.begin(), conta.end(), extraValue),
                 extraValue);

  std::cout << "\nAfter  : ";
  for (size_t i = 0; i < conta.size(); i++)
    std::cout << conta[i] << " ";

  gettimeofday(&end, NULL);
  seconds = end.tv_sec - start.tv_sec;
  microseconds = end.tv_usec - start.tv_usec;
  long diff = (seconds * 1000000) + microseconds;
  if (choice == 'v')
    std::cout << "\nTime to process a range of " << count
              << " elements with std::vector : " << diff << " us"
              << "\n";
  if (choice == 'd')
    std::cout << "\nTime to process a range of " << count
              << " elements with std::deque : " << diff << " us"
              << "\n";
}

int main(int ac, char* av[]) {
  hasExtraValue = false;
  extraValue = 0;
  if (ac < 2)
    exit(1);
  if ((ac - 1) % 2 != 0) {
    hasExtraValue = true;
    extraValue = std::atoi(av[ac - 1]);
    if (extraValue < 0) {
      std::cerr << "Error: Invalid Extra Value: Number Less Than 0\n";
      return 1;
    }
    ac--;
  }

  std::cout << "Before: ";
  if (ac < 6) {
    for (int i = 1; i < ac; i++)
      std::cout << av[i] << " ";
  } else {
    for (int i = 1; i < 6; i++)
      std::cout << av[i] << " ";
    std::cout << "[...]";
  }

  std::vector<std::pair<unsigned int, unsigned int> > vec;
  for (int i = 1; i < ac; i += 2) {
    if (std::isdigit(*av[i])) {
      checkInput(av[i], av[i + 1]);
      vec.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
    }
  }
  std::vector<unsigned int> vec_a, vec_b;
  proccessValues(ac, vec, vec_a, vec_b, 'v');

  std::deque<std::pair<unsigned int, unsigned int> > dec;
  for (int i = 1; i < ac; i += 2) {
    if (std::isdigit(*av[i])) {
      checkInput(av[i], av[i + 1]);
      dec.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
    }
  }
  std::deque<unsigned int> dec_a, dec_b;
  proccessValues(ac, dec, dec_a, dec_b, 'd');

  return 0;
}
