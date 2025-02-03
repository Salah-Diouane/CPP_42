/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:44:25 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/23 13:19:21 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{  
    Harl *obj_harl = new Harl();
    if (obj_harl == NULL){
        std::cout << "CReation Failed !!" << std::endl;   
        return 0;
    }
    obj_harl->complain("DEBUG");
    obj_harl->complain("INFO");
    obj_harl->complain("WARNING");
    obj_harl->complain("ERROR");
    delete obj_harl;
}
