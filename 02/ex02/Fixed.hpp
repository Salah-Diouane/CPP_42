/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 09:54:33 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/30 15:24:40 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int rawBits;
    static const int nbr_byts = 8;
public:
    Fixed();
    Fixed(const int rawBits);
    Fixed(const float rawbit);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    
    bool operator>(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);
    
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator/(const Fixed& other);
    Fixed operator*(const Fixed& other);
    
    Fixed& operator++(void);
    Fixed operator++(int );

    Fixed& operator--(void);
    Fixed operator--(int );
    
    void setRawBits(int const raw);
    int getRawBits(void) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    
    static Fixed& max(  Fixed& obj_1, Fixed& obj_2);
    static const Fixed& max( const Fixed& obj_1, const Fixed& obj_2);
    
    static Fixed& min(  Fixed& obj_1,  Fixed& obj_2);
    static  const Fixed& min( const Fixed& obj_1, const Fixed& obj_2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif
