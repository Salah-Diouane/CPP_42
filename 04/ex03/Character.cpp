/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:18:44 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/12 19:51:56 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Character.hpp"

Character::Character()
{
	name = "character";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src ;
}

Character& Character::operator=(const Character &src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (src.inventory[i] == NULL)
			inventory[i] = NULL;
		else
			inventory[i] = src.inventory[i]->clone();
	}
	this->name = src.name;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

const std::string&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			this->inventory[i] = materia;
			return ;
		}
	}
	std::cout << "--> " << this->name <<  " no space left for : "  << materia->getType() << " !!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << this->name <<  " Invalid Index !! ( 0 >= index <= 3)" << std::endl;
		return ;
	}
	if (inventory[idx])
	{
		delete inventory[idx];
		inventory[idx] = NULL;
		return ;
	}
	std::cout << this->name <<  " We don't have this Materia at index : "  << idx << " . " << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <=3) && inventory[idx])
	{
		inventory[idx]->use(target);
		return ;
	}
	std::cout << this->name <<  " We don't have this Materia at index : "  << idx << " . " << std::endl;
}

AMateria*	Character::getMateria(int idx) const
{
	if (idx < 0 || idx > 3)
	{
		std::cout << this->name <<  " Invalid Index !! ( 0 >= index <= 3)" << std::endl;
		return (NULL);
	}
	if (inventory[idx])
		return (inventory[idx]);
	std::cout << this->name <<  " We don't have this Materia at index : "  << idx << " . " << std::endl;
	return (NULL);
}
