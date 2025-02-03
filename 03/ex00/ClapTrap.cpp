/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:27:48 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 09:38:47 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(){
    std::cout << "Default constructer called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other){
    std::cout << "Copy constructer called" << std::endl;
    *this = other;
}

void ClapTrap :: sethitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}

int ClapTrap :: gethitPoints()
{
    return (this->hitPoints);
}

void ClapTrap :: setattackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}

int ClapTrap :: getattackDamage()
{
    return (this->attackDamage);
}

void ClapTrap :: setenergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
}

int ClapTrap :: getenergyPoints()
{
    return (this->energyPoints);
}

void ClapTrap :: setName(std::string name)
{
    this->name = name;
}

std::string ClapTrap :: getName()
{
    return (this->name);
}

ClapTrap& ClapTrap :: operator=( ClapTrap& other)
{
    std :: cout << "Copy assignment operator called" << std :: endl;
    if (this != &other)
    {
        this->attackDamage = other.getattackDamage();
        this->energyPoints = other.getenergyPoints();
        this->hitPoints = other.gethitPoints();
        this->name = other.getName();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints < 0) {
        std::cout << "ClapTrap " << this->name << " is out of energy and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;
}

void ClapTrap:: takeDamage(unsigned int amount) {
    if (hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " cannot take any more damage, it's already down!" << std::endl;
        return;
    }
    this->hitPoints -= amount;
    if (this->hitPoints <= 0) {
        this->hitPoints = 0;
        std::cout << "ClapTrap " << this->name << " has been defeated!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap:: beRepaired(unsigned int amount) {
    if (this->hitPoints == 0) {
        std::cout << "ClapTrap " << this->name << " cannot be repaired, it's already down!" << std::endl;
        return;
    }
    this->hitPoints += amount;
    std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
}
