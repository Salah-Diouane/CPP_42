/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:23:47 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 10:49:06 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <istream>
#include "ClapTrap.hpp"
            
class ScavTrap: public ClapTrap
{           
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &other);
    ~ScavTrap();
    ScavTrap& operator=( ScavTrap& other);

    void attack(const std::string& target);
    void guardGate();
};


