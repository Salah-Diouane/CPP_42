/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:27:02 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:27:06 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());

    src->learnMateria(new Cure());

    ICharacter* me = new Character("salah");

    AMateria* tmp;
    AMateria* tmp2;
    AMateria* tmp3;

    tmp = src->createMateria("ice");

    me->equip(tmp);

    tmp = src->createMateria("cure");

    me->equip(tmp);

    tmp2 = src->createMateria("ice");

    me->equip(tmp2);

    tmp2 = src->createMateria("cure");

    me->equip(tmp2);

    tmp3 = src->createMateria("ice");

    me->unequip(0);

    me->equip(tmp3);


    ICharacter* bob = new Character("bob");

    me->use(0, *bob);

    me->use(3, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}