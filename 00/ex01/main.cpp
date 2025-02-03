/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:46:24 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/14 12:36:32 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string cmd;

    while (1)
    {
        std::cout << "Type A Cmd : [ADD] [SEARCH] [EXIT]" << std::endl;
        if (std::getline(std::cin, cmd))
        {
            if (cmd == "ADD")
            {
                phonebook.add_contact();
                continue;
            }
            else if (cmd == "SEARCH")
                phonebook.search_contact();
            else if (cmd == "EXIT")
                return (0) ;
            else
                std::cout << "Wrong Command !!!" << std::endl;
        }
        else
            return (0);
    }
}
