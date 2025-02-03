/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:59:20 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:08:54 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
protected : 
    std::string type;
public : 
    Animal();
    Animal(Animal &other);
    virtual ~Animal();
    Animal &operator=(Animal &other);
    
    std::string getType() const;
    
    virtual void makeSound() const ;
};

#endif
