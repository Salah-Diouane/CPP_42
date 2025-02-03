/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:17:41 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/09 16:23:45 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std :: string Contact :: get_first_name(void) const
{
    return(this->first_name);
}

std :: string Contact :: get_last_name(void) const
{
    return(this->last_name);
}

std :: string Contact :: get_ph_number(void) const
{
    return(this->ph_number);
}

std :: string Contact :: get_nickname(void) const
{
    return(this->nickname);
}

std :: string Contact :: get_secret(void) const
{
    return(this->secret);
}

void Contact :: set_first_name(std :: string f_name)
{
    this->first_name = f_name;
}

void Contact :: set_last_name(std :: string l_name)
{
    this->last_name = l_name;
}

void Contact :: set_nickname(std :: string n_name)
{
    this->nickname = n_name;
}

void Contact :: set_ph_number(std :: string number)
{
    this->ph_number = number;
}

void Contact :: set_secret(std :: string secret)
{
    this->secret = secret;
}
