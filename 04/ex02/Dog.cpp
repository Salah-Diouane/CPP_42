/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:59:51 by sdiouane          #+#    #+#             */
/*   Updated: 2024/09/05 18:39:17 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog :: Dog()
{
    this->brn = new Brain(); 
    this->type = "Dog";
    std::cout <<"Dog constructor called !!\n";
}

Dog :: ~Dog()
{
    delete this->brn;
    std::cout <<"Dog Destructor called !!\n";
}

void Dog :: makeSound() const
{
    std::cout << "meaao meaao\n";
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
    Brain *tmp = other.brn;
    this->brn = new Brain(*tmp);
    return *this;
}
