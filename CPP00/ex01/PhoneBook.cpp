/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:09:28 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/18 10:07:46 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->index = 0 ;
}

PhoneBook::~PhoneBook()
{
}

int just_spaces(std::string str)
{
    for (size_t i = 0; i < str.length(); i++){
        if (!isspace(str[i]))
            return 0;
    }
    return 1;
}

int check_content(std::string str, std::string msg)
{
    if (str.empty() || just_spaces(str)){
        std::cout << "invalid "<< msg <<  "!!!!" << std::endl;
        return 0;
    }
    for (size_t i = 0; i < str.length(); i++){
        if ((!isalpha(str[i]) && str[i] != '\t' && str[i] != ' ' && !isnumber(str[i]))){
            std::cout << "invalid "<< msg <<  "!!!!" << std::endl;
            return (0);
        }
    }
    return (1) ;
}

int is_number(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i])){
            std::cout << "Just Numbers !!!\n";
            return 0;
        }
    }
    return 1;
}

void PhoneBook ::add_contact(void)
{
    std ::string str;

    str = "";
    while (!std::cin.eof())
    {
        std::cout << "Enter your first name : " << std::endl;
        if (std::getline(std::cin, str))
        {
            if (check_content(str, "first name")){
                this->arr_contacts[(this->index % 8)].set_first_name(str);
                break;
            }
            else
                continue;
        }
    }
    
    while (!std::cin.eof())
    {
        std::cout << "Enter your last name : " << std::endl;
        if (std::getline(std::cin, str))
        {
            if (check_content(str, "last name")){
                this->arr_contacts[(this->index % 8)].set_last_name(str);
                break;
            }
            else
                continue;
        }
    }
    
    while (!std::cin.eof())
    {
        std::cout << "Enter your nickname : " << std::endl;
        if (std::getline(std::cin, str))
        {
            if (check_content(str, "nickname")){
                this->arr_contacts[(this->index % 8)].set_nickname(str);
                break;
            }
            else
                continue;
        }
    }
    
    while (!std::cin.eof())
    {
        std::cout << "Enter your phone number : " << std::endl;
        if (std::getline(std::cin, str))
        {
            if (check_content(str, "phone number") && is_number(str)){
                this->arr_contacts[(this->index % 8)].set_ph_number(str);
                break;
            }
            else
                continue;
        }
    }
    
    while (!std::cin.eof())
    {
        std::cout << "Enter your secret : " << std::endl;
        if (std::getline(std::cin, str))
        {
            if (check_content(str, "secret")){
                this->arr_contacts[(this->index % 8)].set_secret(str);
                break;
            }
            else
                continue;
        }
    }
    this->index++;
}



void PhoneBook ::print_contact(Contact contact)
{
    if (contact.get_first_name().empty())
    {
        std::cout << "We don't have this contact !!" << std::endl;
        return ;
    }
    std::cout << "-> First name : ";
    std::cout << contact.get_first_name() << std::endl;
    std::cout << "-> Last name : ";
    std::cout << contact.get_last_name() << std::endl;
    std::cout << "-> Nickname : ";
    std::cout << contact.get_nickname() << std::endl;
    std::cout << "-> Phone number : ";
    std::cout << contact.get_ph_number() << std::endl;
    std::cout << "-> Secret : ";
    std::cout << contact.get_secret() << std::endl;
}

std::string truncate(const std::string &text, int width)
{
    if (text.length() > (size_t)width)
        return text.substr(0, width - 1) + ".";
    else
        return text;
}

void PhoneBook::search_contact()
{
    std::string str;
    int index;

    std::cout << "Contacts List:" << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    int i;
    for (i = 0; i < 8; ++i)
    {
        if (arr_contacts[i].get_first_name().empty())
            break;
        std::cout << std::setw(10) << (i + 1) << "|";
        std::cout << std::setw(10) << truncate(arr_contacts[i].get_first_name(), 10) << "|";
        std::cout << std::setw(10) << truncate(arr_contacts[i].get_last_name(), 10) << "|";
        std::cout << std::setw(10) << truncate(arr_contacts[i].get_nickname(), 10) << std::endl;
    }

    if (i == 0)
    {
        std::cout << "No contacts found." << std::endl;
        return;
    }

    std::cout << "Enter index of contact to display:" << std::endl;
    if (std::getline(std::cin, str))
    {
        bool valid_input = str.empty();
        
        for (std::size_t i = 0; i < str.length(); i++)
        {
            if (!isdigit(str[i]) || isspace(str[i]))
            {
                valid_input = true;
                break;
            }
        }

        if (valid_input)
        {
            std::cout << "Invalid input format! Please enter a valid number." << std::endl;
            return;
        }

        index = std::atoi(str.c_str());
        
        if (index < 1 || index > 8)
        {
            std::cout << "Invalid index! Please enter a number between 1 and 8 !" << std::endl;
            return;
        }

        print_contact(arr_contacts[index - 1]);
    }
}
