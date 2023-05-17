#include "BitcoinExchange.hpp"
#include <stdexcept>

/*--------------------------------------------------------*/
BitcoinExchange::BitcoinExchange() {
  std::ifstream inputFile("./data.csv");
  if (inputFile.is_open()) {
    std::string line;
    std::getline(inputFile, line);
    while (std::getline(inputFile, line)) {
      // Split line into date and rate
      size_t commaPos = line.find(",");
      std::string date = line.substr(0, commaPos);
      float rate = std::stof(line.substr(commaPos + 1));
      data[date] = rate;
    }
    inputFile.close();
  } else {
    std::cerr << "Error: Unable to open input file." << std::endl;
  }
}

// copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &a) { data = a.data; }

// destructor
BitcoinExchange::~BitcoinExchange() {

}

// assignment operator
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &a) {
  if (this != &a) {
    data = a.data;
  }
  return *this;
}

void BitcoinExchange::output_data() {
  for (std::map<std::string, double>::const_iterator it = this->data.begin();
       it != this->data.end(); ++it) {
    std::cout << it->first << ": " << it->second << std::endl;
  }
}
