/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:00:05 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:15:10 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private : 
    Brain* brn; 
public :
    Cat();
    Cat(Cat &other);
    Cat &operator=(Cat &other);
    ~Cat();
    
    void makeSound() const;
};
