#include "BitcoinExchange.hpp"

bool isValidValue(const std::string &value) {
  double num;

  if (value.empty())
    throw std::invalid_argument("Value is empty");
  try {
    num = std::stod(value);
  } catch (const std::invalid_argument &) {
    throw std::invalid_argument("Invalid value format");
  } catch (const std::out_of_range &) {
    throw std::out_of_range("Value out of range");
  }
  if (num < 0.0 || num > 1000.0)
    throw std::out_of_range("Value out of range");
  return true;
}

bool isValidDate(const std::string &date) {
  int year;
  int month;
  int day;

  for (int i = 0; i < 10; i++) {
    if (i == 4 || i == 7) {
      if (date[i] != '-')
        throw std::invalid_argument("Invalid date format");
    } else if (!std::isdigit(date[i])) {
      throw std::invalid_argument("Invalid character in date");
    }
  }
  year = std::stoi(date.substr(0, 4));
  month = std::stoi(date.substr(5, 2));
  day = std::stoi(date.substr(8, 2));
  if (year < 2009 || year > 2022)
    throw std::out_of_range("Invalid year");
  if (month < 1 || month > 12)
    throw std::out_of_range("Invalid month");
  if (day < 1 || day > 31)
    throw std::out_of_range("Invalid day");
  return true;
}

int main(int argc, char *argv[]) {
  std::ifstream in_file;
  std::string str_line;
  BitcoinExchange exchang;
  std::string date_str, value_str;
  std::string::size_type pos;
  if (argc == 2) {
    in_file.open(argv[1], std::ios::in);
    if (!in_file.is_open()) {
      std::cout << "#No such File " << argv[1] << std::endl;
      exit(0);
    }
    std::getline(in_file, str_line);
    while (std::getline(in_file, str_line)) {
      if (str_line.empty())
        continue; // skip empty lines
      pos = str_line.find('|');
      if (pos != std::string::npos) {
        date_str = str_line.substr(0, pos - 1);
        value_str = str_line.substr(pos + 1);
        try {
          if (isValidDate(date_str) && isValidValue(value_str))
            exchang.output_data(date_str, value_str);
        } catch (const std::exception &e) {
          std::cout << "#Error: " << e.what() << std::endl;
        }
      } else {
        std::cout << "#Error: invalid format on file: line " << str_line
                  << std::endl;
      }
    }
    in_file.close();
  } else
    std::cout << "#Error : No File " << std::endl;
  return 0;
}
