/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:58:29 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:01:40 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << "-> " << j->getType() << " " << std::endl;
    // std::cout << "-> " << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();
    // delete meta;
    // delete j;
    // delete i;

    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    
    std::cout << "-> " << i->getType() << " " << std::endl;
    i->makeSound();
    
    meta->makeSound();

    delete meta;
    delete i;
    return 0;
}