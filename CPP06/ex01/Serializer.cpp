/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:26:51 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/20 23:02:31 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* ptr = reinterpret_cast<Data*>(raw);
    return ptr;
}
