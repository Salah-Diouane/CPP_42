/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:16:47 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/27 12:10:54 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T *elements;
        unsigned int length;

    public:
        Array() : elements(NULL), length(0) {}

        Array(unsigned int n) : elements(new T[n]()), length(n) {}

        Array(const Array &other) : elements(NULL), length(other.length)
        {
            if (length > 0)
            {
                elements = new T[length];
                for (unsigned int i = 0; i < length; i++)
                    elements[i] = other.elements[i];
            }
        }
        
        Array &operator=(const Array &other)
        {
            if (this != &other)
            {
                delete[] elements;
                length = other.length;
                if (length > 0)
                    elements = new T[length];
                else
                    elements = NULL;
                for(unsigned int i = 0; i < length; i++)
                    elements[i] = other.elements[i];
            }
            return *this;
        }
        
        ~Array()
        {
            delete[] elements;
        }

        T& operator[](unsigned int index) //
        {
            if (index >= length)
                throw std::out_of_range("Index out of bounds");
            return elements[index];
        }
        
        T& operator[](const unsigned int index) const
        {
            if (index >= length)
                throw std::out_of_range("Index out of bounds");
            return elements[index];
        }

        unsigned int size() const
        {
            return length;
        }

};
