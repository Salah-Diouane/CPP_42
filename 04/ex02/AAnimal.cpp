/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:59:26 by sdiouane          #+#    #+#             */
/*   Updated: 2024/09/05 16:34:27 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal :: AAnimal()
{
    std::cout <<"AAnimal constructor called !!\n";
}

AAnimal :: ~AAnimal()
{
    std::cout <<"AAnimal descontructer called !!\n";
}

std::string AAnimal :: getType() 
{
    return this->type;
}

AAnimal &AAnimal::operator=(AAnimal &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void AAnimal :: setType(std::string t) 
{
    this->type = t;
} 

AAnimal :: AAnimal(AAnimal &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

