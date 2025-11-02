/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:01:04 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:15:29 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private : 
    Brain* brn; 
public :
    Dog();
    Dog(Dog &other);
    ~Dog();
    Dog &operator=( Dog &other);
    void makeSound() const;
};