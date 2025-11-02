/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:45:07 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/27 12:13:29 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;


        Array<int> intArray(5);
        std::cout << "intArray size: " << intArray.size() << std::endl;


        for (unsigned int i = 0; i < intArray.size(); i++)
            intArray[i] = i * 10;

        std::cout << "intArray elements: ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;


        Array<int> copyArray(intArray);
        std::cout << "copyArray elements after copy: ";
        for (unsigned int i = 0; i < copyArray.size(); i++)
            std::cout << copyArray[i] << " ";
        std::cout << std::endl;


        intArray[0] = 99;
        std::cout << "After modifying intArray, copyArray[0]: " << copyArray[0] << std::endl;


        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "assignedArray elements after assignment: ";
        for (unsigned int i = 0; i < assignedArray.size(); i++)
            std::cout << assignedArray[i] << " ";
        std::cout << std::endl;


        std::cout << "Accessing out of bounds: " << intArray[1111] << std::endl;
    }
    catch(std::exception &r)
    {
        std::cout << r.what()<< std::endl;
    }
    return 0;
}
