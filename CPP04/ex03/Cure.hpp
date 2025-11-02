/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:21:33 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/12 00:06:08 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure :  public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		Cure& operator=(const Cure &src);
		~Cure();

		Cure* clone() const;
		void use(ICharacter &target);
};

#endif 