/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:03:15 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/26 13:43:09 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename M>

void iter(T *arry, size_t size, M (*fct)(T&))
{
    if (arry && fct)
    {
        for (size_t i = 0; i < size; i++)
        {
            fct(arry[i]);
        }
        
    }
}
