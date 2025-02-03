/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:29:48 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/01 08:45:10 by sdiouane         ###   ########.fr       */
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
    Fixed(const int rawbit);
    Fixed(const float rawbit);
    Fixed& operator=(const Fixed& other);
    Fixed(const Fixed &other);
    ~Fixed();
    
    void setRawBits(int const raw);
    int getRawBits(void) const;
    
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif
