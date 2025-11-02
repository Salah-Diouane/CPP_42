/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:15:59 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:45:41 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
protected : 
    std::string type;
public : 
    WrongAnimal();
    WrongAnimal(WrongAnimal &other);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal &other);
    
    std::string getType() const;
    virtual void makeSound() const ;
};


#endif