/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:27:46 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 10:00:49 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    ScavTrap scav("SALAH");

    scav.attack("ADAM");
    scav.takeDamage(50);
    scav.beRepaired(20);
    scav.guardGate();
    scav.attack("AHMED");
    scav.takeDamage(150);
    scav.attack("Vault Hunter");
}
