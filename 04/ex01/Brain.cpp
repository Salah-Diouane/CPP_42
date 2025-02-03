/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:17:25 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:37:30 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain defualt constructer caled !\n";
}

Brain::~Brain()
{
    std::cout << "Brain Destructor caled !\n";
}

Brain :: Brain(Brain &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(Brain &other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = other.ideas[i];
    return *this;
}
