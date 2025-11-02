/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:00:24 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:17:23 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat()
{
    this->type = "Cat";
    std::cout <<"Cat Constructor Called !!\n";
}

Cat :: ~Cat()
{
    std::cout <<"Cat Destructor Called !!\n";
}

Cat :: Cat(Cat &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(Cat &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void Cat :: makeSound() const
{
    std::cout << "Meaao Meaao\n";
}
