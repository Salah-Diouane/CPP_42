/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:21:57 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/12 01:01:51 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->table[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (!src.table[i])
			table[i] = NULL;
		else
			table[i] = src.table[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (table[i])
			delete table[i];
		if (!src.table[i])
			table[i] = NULL;
		else
			table[i] = src.table[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (table[i])
			delete table[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!table[i])
		{
			table[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (table[i]->getType() == type)
			return (table[i]->clone());
	}
	return (NULL);
}
