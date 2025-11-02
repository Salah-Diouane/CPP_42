/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:23:58 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 00:30:17 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <class T>

typename T::iterator easyfind(T &container, int value) {

    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::logic_error("Element not found !!");
    return it;
}
