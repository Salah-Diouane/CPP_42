/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:18:48 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/12 00:10:48 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string	name;
		AMateria*	inventory[4];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &src);
		Character& operator=(const Character &src);
		~Character();
	
		const std::string &getName() const;
		AMateria*	getMateria(int idx) const;

		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
