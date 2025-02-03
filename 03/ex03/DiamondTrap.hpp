/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:41:09 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/04 10:17:09 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
 
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public  ScavTrap, public  FragTrap
{
private :
    std::string name;
public :
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    void attack(const std::string& target);
    
    void whoAmI();
};

#endif