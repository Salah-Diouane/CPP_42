/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:28:46 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/23 13:16:45 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0){
        std::cout << "Invalid Number !!" << std::endl;
        return NULL;
    }
    Zombie *zombie = new Zombie[N];
    if (zombie == NULL){
        std::cout << "Creation Failed !!" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++)
        zombie[i].setName(name);
    return (zombie);
}
