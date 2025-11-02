/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:29:52 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/30 15:22:24 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static float ft_power(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int rawbit)
{
    std::cout << "Int constructor called" << std::endl;
    this->rawBits = rawbit * ft_power(2, nbr_byts);
}

Fixed::Fixed(const float rawbit)
{
    std::cout << "Float constructor called" << std::endl;
    this->rawBits = roundf(rawbit * ft_power(2, nbr_byts));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed::getRawBits(void) const
{
    return this->rawBits;
}

int Fixed::toInt() const
{
    return ((int)this->rawBits / ft_power(2, nbr_byts));
}

float Fixed::toFloat() const
{
    return ((float)this->rawBits / ft_power(2, nbr_byts));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->rawBits = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}
