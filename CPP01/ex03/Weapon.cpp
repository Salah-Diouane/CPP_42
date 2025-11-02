/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:31:07 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/21 16:07:03 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std :: string type) : type(type) 
{  
}

Weapon::~Weapon()
{
}

void Weapon :: setType(std :: string type)
{
    this->type = type;
}

const std :: string&  Weapon :: getType()
{
    return (this->type);
}
