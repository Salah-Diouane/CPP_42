/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:00:24 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:35:09 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat()
{
    this->brn = new Brain(); 
    this->type = "Cat";
    std::cout <<"Cat constructor called !!\n";
}

Cat :: ~Cat()
{
    delete this->brn;
    std::cout <<"Cat Destructor called !!\n";
}

void Cat :: makeSound() const
{
    std::cout << "meaao meaao\n";
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
    Brain *tmp = other.brn;
    this->brn = new Brain(*tmp);
    return *this;
}
