/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:59:20 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/14 16:18:54 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class AAnimal
{
protected : 
    std::string type;
public : 
    AAnimal();
    AAnimal(AAnimal &other);
    AAnimal &operator=(AAnimal &other);
    virtual ~AAnimal();
    
    std::string getType() ;
    void setType(std::string t) ;
    virtual void makeSound() const = 0;
};

#endif