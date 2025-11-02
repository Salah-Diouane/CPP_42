/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:15:59 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:10:49 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected : 
    std::string type;
public : 

    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal &other);
    WrongAnimal &operator=(WrongAnimal &other);
    
    std::string getType() const;
    void setType(std::string t) const;
    
    virtual void makeSound() const ;
};


#endif