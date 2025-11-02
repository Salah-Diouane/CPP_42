/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:06:31 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/16 15:50:39 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed() : rawBits(0)
{
    std :: cout << "Default constructor called" << std :: endl;
}

Fixed :: ~Fixed()
{
    std :: cout << "Destructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed &other)
{
    std :: cout << "Copy constructor called" << std :: endl;
    *this = other;
}

void Fixed :: setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed :: getRawBits() const
{
    std :: cout << "getRawBits member function called" << std :: endl;
    return (this->rawBits);
}

Fixed& Fixed :: operator=(const Fixed& other)
{
    std :: cout << "Copy assignment operator called" << std :: endl;
    if (this != &other)
        this->rawBits = other.getRawBits();
    return (*this);
}
