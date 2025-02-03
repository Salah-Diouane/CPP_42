/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:21:37 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:10:51 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::Ice(const Ice &src)
{
	this->type = src.type;
}

Ice& Ice::operator=(const Ice &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Ice::~Ice()
{
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout <<  "* shoots an ice bolt at "  << target.getName() <<  " *"  << std::endl;
}
