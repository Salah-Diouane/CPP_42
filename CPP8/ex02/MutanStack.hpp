/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:57:58 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 00:46:18 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iterator>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {

    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        MutantStack() {}
        
        MutantStack(const MutantStack &other) : std::stack<T>(other) {}
        
        MutantStack &operator=(const MutantStack &other) {
            if (this != &other)
                std::stack<T>::operator=(other);
            return *this;
        }
        
        ~MutantStack() {}

        iterator begin() { 
            return std::stack<T>::c.begin(); 
        }

        iterator end() { 
            return std::stack<T>::c.end(); 
        }

        const_iterator begin() const { 
            return std::stack<T>::c.begin(); 
        }

        const_iterator end() const { 
            return std::stack<T>::c.end(); 
        }
};
