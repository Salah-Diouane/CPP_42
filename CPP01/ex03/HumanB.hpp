/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:17:23 by sdiouane          #+#    #+#             */
/*   Updated: 2024/08/29 09:39:11 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
    std :: string name;
    Weapon *weapon;
public:
    HumanB(std :: string type);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &wep);
};

