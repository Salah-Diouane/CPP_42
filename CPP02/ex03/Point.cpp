/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:15:23 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/30 15:17:53 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point :: Point(): x(0), y(0)
{
}

Point :: ~Point()
{
}

Point :: Point(float const x_val, float const y_val) : x(Fixed(x_val)), y(Fixed(y_val))
{
}

Point :: Point(Point &other): x(other.x), y(other.y)
{
}

int  Point :: getX() const {return this->x.getRawBits();}

int  Point :: getY() const {return this->y.getRawBits();}

Point& Point :: operator=(const Point& other)
{
    (void)other;
    return *this;
}

