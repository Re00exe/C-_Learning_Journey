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
BitcoinExchange::~BitcoinExchange() {}

// assignment operator
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &a) {
  if (this != &a) {
    data = a.data;
  }
  return *this;
}

void BitcoinExchange::output_data(std::string date, std::string value) {

  double btc_value;

  btc_value = std::stod(value);
  for (std::map<std::string, double>::const_iterator it = this->data.begin();
       it != this->data.end(); it++) {
    if (it->first == date) {
      std::cout << it->first << ": "
                << "=>" << btc_value << " = " << std::fixed
                << std::setprecision(2) << btc_value * it->second << std::endl;
      break;
    } else {
      it = this->data.lower_bound(date);
      std::cout << date << ": "
                << "=>" << btc_value << " = " << std::fixed
                << std::setprecision(2) << btc_value * it->second << std::endl;
      break;
    }
  }
}
