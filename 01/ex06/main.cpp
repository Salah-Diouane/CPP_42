/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:44:25 by sdiouane          #+#    #+#             */
/*   Updated: 2024/10/23 13:19:46 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int arc, char **arv)
{
    (void)arc;
    if (arc != 2){
        std :: cout << "Invalid Args " << std :: endl;
        return (-1);
    }
    else
    {
        std::string level = arv[1];
        if (!level.empty()){
            Harl *obj_harl = new Harl();
            if (obj_harl == NULL){
                std::cout << "CReation Failed !!" << std::endl;   
                return 0;
            }
            obj_harl->complain(level);
            delete obj_harl;
        }
        else
            std :: cout << "invalid level number" << std :: endl;
    }
}     
