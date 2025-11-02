/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:46:56 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/26 09:03:39 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

int main()
{
    Data data= {2003, 13.37};
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized (as integer): " << &raw << std::endl;

    Data* dt = Serializer::deserialize(raw);
    std::cout << "Deserialized -> Data integer: " << dt->integer << ", float: " << dt->f << std::endl;
}
