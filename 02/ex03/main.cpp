/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:15:18 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/24 13:39:01 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main()
{
    Point p1(0, 0);
    Point p2(5, 0);
    Point p3(0, 5);
    Point p4(2, 2);
    
    float var = bsp(p1, p2, p3, p4);
    if (var == 1)
        std :: cout << "The point p4 is inside of our triangle." << std :: endl;
    else
        std :: cout << "The point p4 is outside of our triangle." << std :: endl;
}
