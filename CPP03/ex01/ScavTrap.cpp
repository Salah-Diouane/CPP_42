/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:23:50 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 10:51:50 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
}

ScavTrap& ScavTrap :: operator=( ScavTrap& other)
{
    std :: cout << "Copy assignment operator called" << std :: endl;
    if (this != &other)
    {
        this->attackDamage = other.getattackDamage();
        this->energyPoints = other.getenergyPoints();
        this->hitPoints = other.gethitPoints();
        this->name = other.getName();
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {

    std::cout << "ScavTrap " << this->name << " attacks " << target << ".  "  << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
}
