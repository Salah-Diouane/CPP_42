/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:59:51 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:34:57 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog :: Dog()
{
    this->brn = new Brain();
    this->type = "dog";
    std::cout <<"Dog constructor called !!\n";
}

Dog :: ~Dog()
{
    delete this->brn;
    std::cout <<"Dog Destructor called !!\n";
}

void Dog :: makeSound() const
{
    std::cout << "haw haw\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    Brain *tmp = other.brn;
    this->brn = new Brain(*tmp);
    return *this;
}
