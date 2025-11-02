/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:15:25 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/30 15:15:28 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
    const Fixed  x;
    const Fixed  y;
public:
    Point();
    Point(float x, float y);
    Point(Point &other);
    int  getX() const;
    int  getY() const;

    Point& operator=(const Point& other);
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif