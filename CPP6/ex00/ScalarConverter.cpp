/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:31:49 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/26 08:55:22 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib> 
#include <climits> 

bool isChar(std::string const &s) {
    if (s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0])) {
        return true;
    }
    return false;
}

bool isString(std::string const &input) {
    for (size_t i = 0; i < input.size(); i++) {
        if (!std::isalpha(input[i]) || !std::isdigit(input[i]) || !std::isprint(input[i])) {
            return false;
        }
    }
    return true;
}

bool check_input(const std::string &input) {
    
    if (input.empty()) {
        return false; 
    }

    size_t i = 0;
    bool has_dot = false;
    bool has_f = false;

    if (isString(input)) {
        return false;
    }

    if (input[i] == '-' || input[i] == '+') {
        i++;
    }

    if (i == input.size()) {
        return false; 
    }

    if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff") {
        return true;
    }
    for (; i < input.size(); i++) {
        if (isdigit(input[i])) {
            continue;
        }
        if (input[i] == '.' && !has_dot) {
            if (i == 0 || i == input.size() - 1) {
                return false; 
            }
            has_dot = true;
        } else if (input[i] == 'f' && has_dot && !has_f && i == input.size() - 1) {
            has_f = true;
        } else {
            return false; 
        }
    }

    if (has_f && (input.size() == 1 || !isdigit(input[input.size() - 2]))) {
        return false;
    }

    return true;
}

void ScalarConverter::convert(std::string const &literal) {

    if (isChar(literal)) {
        
        char c = literal[0];
        std::cout << "char : '" << c << "'" << std::endl;

        int i = static_cast<int>(c);
        std::cout << "int: " << i << std::endl;

        float f = static_cast<float>(i);
        std::cout << "float: " << f;
        if (f == static_cast<int>(f))
            std::cout << ".0f";
        else
            std::cout << "f";
        std::cout << std::endl;

        double d = static_cast<double>(i);
        std::cout << "double: " << d;
        if (d == static_cast<int>(d))
            std::cout << ".0";
        std::cout << std::endl;
        return; 
    }

    if (!check_input(literal)) {
        std::cout << "ERROR   : Invalid input!" << std::endl;
        return;
    }

    double value = std::atof(literal.c_str());

    if (value >= 0 && value <= 127) {
        if (std::isprint(static_cast<char>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
    }

    if (value >= INT_MIN && value <= INT_MAX) {
        int i = static_cast<int>(value);
        std::cout << "int: " << i << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }

    float f = static_cast<float>(value);
    std::cout << "float: " << f;
    if (f == static_cast<int>(f)) {
        std::cout << ".0f";
    } else {
        std::cout << "f";
    }
    std::cout << std::endl;

    std::cout << "double: " << value;
    if (value == static_cast<int>(value)) {
        std::cout << ".0";
    }
    std::cout << std::endl;
}
