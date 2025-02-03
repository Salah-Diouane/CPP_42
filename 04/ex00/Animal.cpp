/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:59:26 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:16:45 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal()
{
    std::cout <<"Animal Constructor Called !!\n";
}

Animal :: ~Animal()
{
    std::cout <<"Animal Destructor Called !!\n";
}

Animal :: Animal(Animal &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

std::string Animal :: getType() const
{
    return this->type;
}

void Animal :: makeSound() const
{
    std::cout << "Sound Of Animal !!\n";
}
