/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 00:29:15 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/23 14:19:19 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z = newZombie("Heap");
	if (z == NULL){
		std::cout << "Creation failed !!" << std::endl; 
		return 0;
	}
	z->announce();
	randomChump("Stack");
	delete z;
}
