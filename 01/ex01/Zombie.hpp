/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:28:51 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/20 08:30:14 by sdiouane         ###   ########.fr       */
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
    void setName(std :: string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
