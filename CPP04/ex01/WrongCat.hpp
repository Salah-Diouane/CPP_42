/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:26:23 by sdiouane          #+#    #+#             */
/*   Updated: 2024/11/13 08:40:06 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
    WrongCat();
    WrongCat(WrongCat &other);
    WrongCat &operator=(WrongCat &other);
    ~WrongCat();
    void makeSound() const;
};
