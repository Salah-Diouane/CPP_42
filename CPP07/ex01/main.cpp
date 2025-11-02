/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:03:01 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/27 09:43:02 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &n)
{
    n++;
}

int toUpperCase(char &c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return 1;
}

template <typename T>
void printElement(T &elem)
{
    std::cout << elem << " ";
}


int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(int);
    
    std::cout << "Before increment: ";
    iter<int, void>(intArray, 5, printElement<int>);
    std::cout << std::endl;

    iter(intArray, intSize, increment);
    
    std::cout << "After increment: ";
    iter<int, void>(intArray, intSize, printElement<int>);
    std::cout << std::endl;


    char charArray[] = {'h', 'e', 'l', 'l', 'o'};
    size_t charSize = sizeof(charArray) / sizeof(char);
    
    std::cout << "Before toUpperCase: ";
    iter<char, void>(charArray, charSize, printElement<char>);
    std::cout << std::endl;

    iter<char, int>(charArray, charSize, toUpperCase);
    
    std::cout << "After toUpperCase: ";
    iter<char, void>(charArray, charSize, printElement<char>);
    std::cout << std::endl;

    return 0;
}
