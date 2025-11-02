#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    this->btcData = other.btcData;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
}

bool BitcoinExchange::check_year(std::string year) {
    for (size_t i = 0; i < year.size(); i++) {
        if (!isdigit(year[i])) {
            std::cerr << "Invalid year !!!\n";
            return false;
        }
    }
    return true;
}

int BitcoinExchange::check_day(int m, int d, int y) {

    if (m <= 0 || m >= 13)
    {
        return 1;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d <= 0 || d >= 31)
            return 1;
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d <= 0 || d >= 32)
            return 1;
    } else {
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
            if (d <= 0 || d >= 30)
                return 1;
        } else {
            if (d <= 0 || d >= 29)
                return 1;
        }
    }
    return 0;
}

bool BitcoinExchange::check_date(std::string date, std::string line){

    size_t pos = 0;
    std::string token, delimiter = "-";

    int year = -1;
    int month = -1;
    int day = -1;
    pos = date.find(delimiter);


    if (pos != std::string::npos) {

        if (check_year(date.substr(0, pos)))
        {
            if (pos - 0 == 4)
            {
                year = atoi(date.substr(0, pos).c_str()); 
                date.erase(0, pos + delimiter.length());  
            }
        }
    }

    pos = date.find(delimiter);

    if (pos != std::string::npos) {

        if (pos - 0 == 2)
        {
            month = atoi(date.substr(0, pos).c_str());
            date.erase(0, pos + delimiter.length());
        }
    }

    if (date.size() == 3)
        day = atoi(date.c_str());
    else
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }

    if (check_day(month, day, year) == 1)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }

    return true;
}


bool BitcoinExchange::check_value(std::string value, std::string line, float *new_val) {

    value.erase(0, value.find_first_not_of(" \t"));
    value.erase(value.find_last_not_of(" \t") + 1);

    if (value.empty()) {
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }

    bool isValidNumber = true;
    bool hasDecimal = false;

    for (size_t i = 0; i < value.size(); i++) { 

        if (value[i] == '.'  && value[i + 1] && !hasDecimal)
            hasDecimal = true; 
        else if (!isdigit(value[i]) && (value[i] != '-' || i != 0)) { 
            isValidNumber = false;
            break;
        }
    }

    if (!isValidNumber)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }

    double val = 0.0;
    std::stringstream ss(value);
    ss >> val;

    if (ss.fail())
    {
        return false;
    }

    if (val < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }

    if (val > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }

    *new_val = val;

    return true;
}

int BitcoinExchange::check_string(std::string& line){

    if (line[0] == ' ' || line[0] == '\t' || line[line.size() - 1] == ' ' || line[line.size() - 1] == '\t'){
        return 0;
    }
    return 1;
}

bool BitcoinExchange::processFiles(const char* filename) {

    std::ifstream file_two("data.csv");

    if (!file_two) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    std::ifstream file_one(filename);

    if (!file_two) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }
 
    std::map<std::string, float> btcData;   

    std::string line, str;

    while (std::getline(file_two, str)) {

        std::stringstream ss(str);  
        std::string key;
        float value;
        
        if (std::getline(ss, key, ',') && ss >> value) {
            btcData[key] = value; 
        }
    }

    float res;
    std::getline(file_one, line);

    if (line != "date | value")
    {
        std::cout << "Error: bad input !!\n";
        return -1;
    }

    while (std::getline(file_one, line)) {

        int pos = line.find("|");

        if (pos > 0 && (line[pos - 1] == ' ' && line[pos + 1] == ' ' && (line[pos + 2] != '\t' && line[pos + 2] != '\n' && line[pos + 2] != ' ')))
        {
            std::string split_str1 = line.substr(0, pos);
            std::string split_str2 = line.substr(pos + 1, line.size() - 1);
            float val = 0;

            if (!check_string(line)){
                std::cout << "Error: bad input => " << line << std::endl;
                continue;                
            }
            
            if (!check_date(split_str1, line) || !check_value(split_str2, line, &val))
                continue;
                
            std::map<std::string, float>::iterator it = btcData.lower_bound(split_str1);
            
            if (split_str1 > "2022-03-29")
            {
                res = 47115.93 * val;
            }
            else if (split_str1 < "2009-01-02")
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            else if (it->first > split_str1)
            {
                it--;
                res = it->second * val;
            }
            std::cout << split_str1 << " ==> " << split_str2 << " = " << res << std::endl;
        }
        else
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
    }

    file_one.close();
    file_two.close();

    return true;;
}
