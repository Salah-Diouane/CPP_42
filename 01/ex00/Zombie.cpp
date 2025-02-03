/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 00:29:19 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 11:07:31 by sdiouane         ###   ########.fr       */
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
    this->name = "";
    std :: cout << "Default Obj Zombie craeted !" << std::endl;
}

Zombie :: ~Zombie()
{
    std :: cout << "Obj Zombie " << this->name << " destroyed !" << std::endl;
}

void Zombie :: announce(void)
{
    std :: cout << this->name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
