/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:27:46 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/03 21:30:25 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamand("SALAH");

    std::cout << " Name " << diamand.getName() << std::endl;
    std::cout << " HitPoints " << diamand.gethitPoints() << std::endl;
    std::cout << " energy " << diamand.getenergyPoints() << std::endl;
    std::cout << " attackdamage " << diamand.getattackDamage() << std::endl;

    diamand.attack("ADAM");  
}

