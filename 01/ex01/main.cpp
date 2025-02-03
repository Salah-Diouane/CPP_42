/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:28:44 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/23 14:20:12 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "salah");
    if (zombie == NULL)
        return 0;
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
}
