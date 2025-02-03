/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:18:39 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/12 00:18:55 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &src)
{
	this->type = src.type;
}

AMateria& AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Default Attack : " << target.getName() << " . " << std::endl;
}
