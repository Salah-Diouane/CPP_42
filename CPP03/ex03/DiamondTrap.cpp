/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:41:11 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 09:15:06 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name){
    this->energyPoints = ScavTrap::scav_energy;
    this->hitPoints = FragTrap::hitPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " has been created!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap has been destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap has been craeted!" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << "." << std::endl;
}
