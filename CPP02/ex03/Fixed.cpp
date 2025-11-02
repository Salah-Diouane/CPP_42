/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:15:22 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/30 19:55:39 by sdiouane         ###   ########.fr       */
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
}

Fixed::Fixed(const int rawbit)
{
    this->rawBits = rawbit * ft_power(2, nbr_byts);
}

Fixed::Fixed(const float rawbit)
{
    this->rawBits = roundf(rawbit * ft_power(2, nbr_byts));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::~Fixed()
{
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
    if (this != &other)
        this->rawBits = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &other)
{
    return this->rawBits > other.rawBits;
}

bool Fixed::operator>=(const Fixed &other)
{
    return this->rawBits >= other.rawBits;
}

bool Fixed::operator<(const Fixed &other)
{
    return this->rawBits < other.rawBits;
}

bool Fixed::operator<=(const Fixed &other)
{
    return this->rawBits <= other.rawBits;
}

bool Fixed::operator==(const Fixed &other)
{
    return this->rawBits == other.rawBits;
}

bool Fixed::operator!=(const Fixed &other)
{
    return this->rawBits != other.rawBits;
}

Fixed Fixed::operator+(const Fixed& other)
{
    return Fixed(this->rawBits + other.rawBits);
}

Fixed Fixed::operator-(const Fixed& other)
{
    return Fixed(this->rawBits - other.rawBits);
}

Fixed Fixed::operator*(const Fixed& other)
{
    return Fixed((((float)this->rawBits * (float)other.rawBits) / ft_power(2, 8)) / ft_power(2, 8));
}

Fixed Fixed::operator/(const Fixed& other)
{
    if (other.rawBits != 0)
        return Fixed(((float)this->rawBits / (float)other.rawBits) * ft_power(2, 8));
    else
        std :: cout << "division by 0 !!!" << std :: endl;
    return Fixed(other);
}

const Fixed& Fixed :: max(const Fixed& obj_1, const Fixed& obj_2)
{
    int max = obj_1.getRawBits();
    if (max < obj_2.getRawBits())
        return (Fixed&)obj_2;   
    return (Fixed&)obj_1;   
}

Fixed& Fixed :: min( Fixed& obj_1,  Fixed& obj_2)
{
    int min = obj_1.getRawBits();
    if (min > obj_2.getRawBits())
        return (Fixed&)obj_2;   
    return obj_1;   
}

Fixed& Fixed :: max(Fixed& obj_1,  Fixed& obj_2)
{
    int max = obj_1.getRawBits();
    if (max < obj_2.getRawBits())
        return (Fixed&)obj_2;   
    return obj_1; 
}

const Fixed& Fixed ::min( const Fixed& obj_1, const Fixed& obj_2)
{
    int min = obj_1.getRawBits();
    if (min > obj_2.getRawBits())
        return (Fixed&)obj_2;
    return (Fixed&)obj_1;   
}

Fixed& Fixed :: operator++(void) //++a pre increment
{
    this->rawBits++;
    return *this;
}

Fixed Fixed :: operator++(int ) // a++ post increment
{
    Fixed tmp = *this;
    this->rawBits++;
    return tmp;
}

Fixed& Fixed :: operator--(void)
{
    this->rawBits--;
    return *this;
}

Fixed Fixed :: operator--(int )
{
    Fixed tmp = *this;
    this->rawBits--;
    return tmp;
}
