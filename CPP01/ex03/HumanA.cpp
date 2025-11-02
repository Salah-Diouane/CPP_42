/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:34:33 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 08:55:58 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
    std :: cout << "--> HumanA Created with Weapon : < " << this->weapon.getType()  << " >" << std :: endl;
}

HumanA::~HumanA()
{
    std :: cout << "--> HumanA Destroyed with Weapon : < " << this->weapon.getType()  << " >" << std :: endl;
}

void HumanA :: attack()
{
    std :: cout << this->name << " Attacks with their " << this->weapon.getType() << std :: endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
