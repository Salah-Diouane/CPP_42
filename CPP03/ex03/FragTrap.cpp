/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:37:27 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 09:15:17 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default fragTrap constructer called !!\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destrocter called !!\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a high five!\n";
}
