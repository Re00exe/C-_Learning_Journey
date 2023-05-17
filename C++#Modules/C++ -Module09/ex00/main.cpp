#include "BitcoinExchange.hpp"

bool isValidDate(const std::string &date) {
  if (date.length() != 11)
    return false;
  for (int i = 0; i < 10; i++) {
    if (i == 4 || i == 7) {
      if (date[i] != '-')
        return false;
    } else if (!isdigit(date[i]))
      return false;
  }
  int year = std::stoi(date.substr(0, 4));
  int month = std::stoi(date.substr(5, 2));
  int day = std::stoi(date.substr(8, 2));
  if (year < 2009 || year > 2022)
    return false;
  if (month < 1 || month > 12)
    return false;
  if (day < 1 || day > 31)
    return false;
  return true;
}

bool isValidValue(const std::string &value) {
  if (value.empty())
    return false;

  double num;
  try {
    num = std::stod(value);
  } catch (...) {
    return false;
  }

  if (num < 0.0 || num > 1000.0)
    return false;

  return true;
}

int main(int argc, char *argv[]) {
  std::ifstream in_file;
  std::string str_line;
  BitcoinExchange exchang;

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
      std::string date_str, value_str;
      std::string::size_type pos = str_line.find('|');
      if (pos != std::string::npos) {
        date_str = str_line.substr(0, pos);
        value_str = str_line.substr(pos + 1);
        if (isValidDate(date_str) && isValidValue(value_str)) {
          exchang.output_data();
        } else
          std::cout << "#Error: Invalid format on file: line " << str_line
                    << std::endl;
      }
      in_file.close();
    }
  } else
    std::cout << "#Error : No File " << std::endl;
  return 0;
}
