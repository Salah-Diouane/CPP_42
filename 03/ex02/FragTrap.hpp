/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:37:30 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/03 21:12:59 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public: 
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap &other);
    FragTrap& operator=( FragTrap& other);
    
    void highFivesGuys(void);
};

#endif