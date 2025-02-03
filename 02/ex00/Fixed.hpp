/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 10:06:34 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/29 14:59:36 by sdiouane         ###   ########.fr       */
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
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed& operator=(const Fixed& other);
    
    void setRawBits(int const raw);
    int getRawBits(void) const;
};

#endif
