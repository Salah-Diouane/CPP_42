/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:31:21 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/23 12:16:33 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter &operator=(const ScalarConverter &);
        ~ScalarConverter();

    public:
        static void convert(std::string const &literal);
};

#endif
