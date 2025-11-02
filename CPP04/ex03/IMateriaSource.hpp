/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:21:48 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/12 20:16:18 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
 
class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		virtual void learnMateria(AMateria *src) = 0;
		virtual AMateria* createMateria(const std::string &type) = 0;
};

#endif 