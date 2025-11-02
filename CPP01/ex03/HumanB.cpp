/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:34:23 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 11:16:11 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB(std :: string name) : name(name), weapon(NULL)
{
    std :: cout << "--> HumaneB  : " << "with non weapon type created !" << std :: endl;
}

HumanB :: ~HumanB()
{
    std :: cout << "--> HumaneB  : "<< "with non weapon type destroyed !" << std :: endl;
}

void HumanB :: attack()
{
    std :: cout << this->name << " attacks with their " << this->weapon->getType() << std :: endl;
}

void	HumanB :: setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
