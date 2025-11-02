/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:01:04 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:10:22 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
public :
    Dog();
    Dog(Dog &other);
    Dog &operator=(Dog &other);
    ~Dog();
    
    void makeSound() const;
};

