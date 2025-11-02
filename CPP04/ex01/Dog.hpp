/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:01:04 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 07:28:02 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private : 
    Brain* brn; 
public :
    Dog();
    Dog(Dog &other);
    ~Dog();
    Dog &operator=(const Dog &other);
    void makeSound() const;
};

