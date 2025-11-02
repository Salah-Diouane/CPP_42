/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 00:29:21 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 11:05:32 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private :
    std::string name;
public :
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void announce( void );
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
