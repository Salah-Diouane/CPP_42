/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:28:48 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 08:30:22 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>

Zombie :: Zombie(std::string name)
{
    this->name = name;
    std :: cout << "Obj Zombie " << this->name << " craeted !" << std::endl;
}

Zombie :: Zombie()
{
    this->name = "(NULL)";
    std :: cout << "Obj Zombie " << this->name << " craeted !" << std::endl;
}

Zombie :: ~Zombie()
{
    std :: cout << "Obj Zombie " << this->name << " destroyed !" << std::endl;
}

void Zombie :: announce(void)
{
    std :: cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

void Zombie :: setName(std :: string name)
{
    this->name = name;
}

