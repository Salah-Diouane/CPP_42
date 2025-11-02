/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:27:50 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/03 21:13:45 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
    

class ClapTrap
{
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap(std::string name);
    ClapTrap();
    ClapTrap(ClapTrap &other);
    ~ClapTrap();
    
    void setName(std::string name);
    std::string getName();
    
    void sethitPoints(int hitPoints);
    int gethitPoints();

    void setenergyPoints(int energyPoints);
    int getenergyPoints();
    
    void setattackDamage(int attackDamage);
    int getattackDamage();
    

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif