/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:21:29 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:10:40 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->type = "cure";
}

Cure::Cure(const Cure &src)
{
	this->type = src.type;
}

Cure& Cure::operator=(const Cure &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cure::~Cure()
{
}

Cure*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout <<  "* heals "  << target.getName() <<  "'s wounds *"  << std::endl;
}
