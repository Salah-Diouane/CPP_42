/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:58:29 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:20:03 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    
    AAnimal* obj[10];
    for (int i = 0; i < 5; i++)
    {
        obj[i] = new Cat();
        obj[i]->getType();
        obj[i]->makeSound();  
        obj[i + 5] = new Dog();   
        obj[i + 5]->getType();
        obj[i + 5]->makeSound();  
    }
    for (int i = 0; i < 10; i++)
    {
       delete obj[i];
    }
    
    return 0;
}
