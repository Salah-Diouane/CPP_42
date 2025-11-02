/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 02:55:06 by sdiouane          #+#    #+#             */
/*   Updated: 2025/05/06 10:11:38 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <limits>
#include <cstdlib> 

class BitcoinExchange {
    private:
        std::map<std::string, float> btcData;
    
    public:

        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange& other);
        BitcoinExchange(const BitcoinExchange& other);
        
        bool check_year(std::string year);

        int check_day(int m, int d, int y);

        bool check_date(std::string date, std::string line);

        bool check_pipe(std::string line);

        bool check_value(std::string value, std::string line, float *new_val);
        
        bool processFiles(const char* filename);

        int check_string(std::string& line);
};
