/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:23:47 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 11:14:16 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <istream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
 
class ScavTrap: virtual public ClapTrap
{           
public:
    int scav_energy;
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &other);
    ~ScavTrap();
    ScavTrap& operator=( ScavTrap& other);

    void attack(const std::string& target);
    void guardGate();
};




#endif