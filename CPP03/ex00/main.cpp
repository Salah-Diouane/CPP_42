/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:27:46 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 09:48:28 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap clap("SALAH");

    std::cout << std::endl;
    clap.attack("adam");
    std::cout << std::endl;
    
    std::cout<<"gethitPoints : " << clap.gethitPoints() << std::endl;
    std::cout<<"getattackDamage : " << clap.getattackDamage() << std::endl;
    std::cout<<"getenergyPoints : " << clap.getenergyPoints() << std::endl;
    std::cout << std::endl;
    
    std::cout << std::endl;
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << std::endl;
    
    std::cout<<"gethitPoints : " << clap.gethitPoints() << std::endl;
    std::cout<<"getattackDamage : " << clap.getattackDamage() << std::endl;
    std::cout<<"getenergyPoints : " << clap.getenergyPoints() << std::endl;
    std::cout << std::endl;
    
    clap.attack("ahmed");
    clap.takeDamage(15);
    std::cout << std::endl;
    
    std::cout<<"gethitPoints : " << clap.gethitPoints() << std::endl;
    std::cout<<"getattackDamage : " << clap.getattackDamage() << std::endl;
    std::cout<<"getenergyPoints : " << clap.getenergyPoints() << std::endl;
    std::cout << std::endl;

    return 0;
}

