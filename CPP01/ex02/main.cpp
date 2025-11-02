/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:45:38 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 08:47:14 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string* stringPTR = &var;
    std::string& stringREF = var;

    std::cout << "      The memory address of the string variable  : " << &var << std::endl;
    std::cout << "      The memory address held by stringPTR       : " << stringPTR << std::endl;
    std::cout << "      The memory address held by stringREF       : " << &stringREF << std::endl << std :: endl;
    
    std::cout << "-----------------------------------------------------------------------------------------\n" << std::endl;

    std::cout << "      The value of the string variable           : " << var << std::endl;
    std::cout << "      The value pointed to by stringPTR          : " << *stringPTR << std::endl;
    std::cout << "      The value referenced by stringREF          : " << stringREF << std::endl;

    return 0;
}

