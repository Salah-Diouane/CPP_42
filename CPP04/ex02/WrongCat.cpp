/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:27:44 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:42:55 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat :: WrongCat()
{
    this->type = "WrongCat";
    std::cout <<"WrongCat Constructor called !!\n";
}

WrongCat :: ~WrongCat()
{
    std::cout <<"WrongCat Destructor called !!\n";
}

WrongCat :: WrongCat(WrongCat &other)
{
    std::cout << "Copy Constructer Called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(WrongCat &other)
{
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

void WrongCat :: makeSound() const
{
    std::cout << "meaao meaao\n";
}
