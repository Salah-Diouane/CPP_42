/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:10:37 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/11 09:11:23 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
    std :: string first_name;
    std :: string last_name;
    std :: string nickname;
    std :: string ph_number;
    std :: string secret;
public:
    Contact();
    ~Contact();
    std :: string get_first_name(void) const;
    std :: string get_last_name(void) const;
    std :: string get_nickname(void) const;
    std :: string get_ph_number(void) const;
    std :: string get_secret(void) const;

    void set_first_name(std :: string);
    void set_last_name(std :: string);
    void set_nickname(std :: string);
    void set_ph_number(std :: string);
    void set_secret(std :: string);
};

#endif