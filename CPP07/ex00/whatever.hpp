/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:17:53 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/26 14:49:27 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap(T& var_1, T& var_2)
{
    T tmp;
    
    tmp = var_2;
    var_2 = var_1;
    var_1 = tmp;
}

template <typename T>
T   min(T var_1, T var_2)
{
    if (var_1 > var_2)
        return var_2;
    else
        return var_1;
}

template <typename T>
T   max(T var_1, T var_2)
{
    if (var_1 > var_2)
        return var_1;
    else
        return var_2;
}
