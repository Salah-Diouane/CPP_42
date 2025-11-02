/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:10:02 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/11 09:11:42 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


class PhoneBook
{
    private:
        Contact arr_contacts[8];
        int index;

    public:
        void add_contact(void);
        void search_contact(void);
        void print_contact(Contact contact);
        PhoneBook();
        ~PhoneBook();
};


#endif