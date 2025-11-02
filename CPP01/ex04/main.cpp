/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:29:05 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/03 18:41:57 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int ft_str_replace(std::string &line, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t s1_len = s1.length();
    size_t i = 0;

    if ((s1 == "" && s2 == "") || (s1 == "" && s2 != "")){
        std::cout << "Can't Replace Empty String !!!" << std::endl;
        return -1;
    }
    if (s1 == s2)
        return 0;
    while (i < line.length())
    {
        if (line.substr(i, s1_len) == s1)
        {
            result += s2;
            i += s1_len;
        }
        else
        {
            result += line[i];
            i++;
        }
    }

    line = result;
    return 0;
}

int main(int arc, char **arv)
{
    (void)arc;
    std :: string data;
    std :: string line;
    if (arc != 4)
    {
        std :: cout << "invalid args !" << std :: endl;
        return 1;
    }
    
    std::ifstream file(arv[1]);

    if (!file.is_open()){
        std::cout << "Error opening this file : " << arv[1] << std::endl;
        return 1;
    }

    while (std::getline(file, line))
    {
        if (!file.eof())
            data += line + "\n";
        else
            data += line;
    }
        
    file.close();
    
    if (ft_str_replace(data, arv[2], arv[3]) == -1)
        return 1;
    
    std::string out_file = std::string(arv[1]) + ".replace";

    std::ofstream new_file;

    new_file.open(out_file);

    new_file << data;

    new_file.close();
    return 0;
}
