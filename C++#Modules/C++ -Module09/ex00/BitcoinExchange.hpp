#ifndef __BITCOINEXCHANGE_H__
#define __BITCOINEXCHANGE_H__
#include <fstream>
#include <iostream>
#include <map>
#include <string>

class BitcoinExchange {
private:
  std::map<std::string, double> data;

public:
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &a);
  ~BitcoinExchange();
  BitcoinExchange &operator=(const BitcoinExchange &a);

  void output_data();
};

#endif
