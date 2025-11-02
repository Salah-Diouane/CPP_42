/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:24:39 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:21:10 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal :: WrongAnimal()
{
    this->type = "Wrong Animal";
    std::cout <<"WrongAnimal Constructor Called !!\n";
}

WrongAnimal :: ~WrongAnimal()
{
    std::cout <<"WrongAnimal Destructor Called !!\n";
}

WrongAnimal :: WrongAnimal(WrongAnimal &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

std::string WrongAnimal :: getType() const
{
    return this->type;
}

void WrongAnimal :: makeSound() const
{
    std::cout << "Sound Of WrongAnimal!!\n";
}
