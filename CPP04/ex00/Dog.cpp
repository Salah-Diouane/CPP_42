/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:59:51 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 15:59:58 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
    this->type = "Dog";
    std::cout <<"Dog Constructor Called !!\n";
}

Dog :: ~Dog()
{
    std::cout <<"Dog Destructor Called !!\n";
}

Dog :: Dog(Dog &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(Dog &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void Dog :: makeSound() const
{
    std::cout << "Haw Haw\n";
}
