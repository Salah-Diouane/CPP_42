/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:37:30 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/03 21:13:56 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
 
class FragTrap : virtual public ClapTrap 
{
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif