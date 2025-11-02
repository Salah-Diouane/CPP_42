/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 01:05:19 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 01:07:14 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(6);
        sp.addNumber(6);
        sp.addNumber(63);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(5);
        
        // std::vector<int> new_nbr;

        // new_nbr.push_back(3);
        // new_nbr.push_back(5);
        // new_nbr.push_back(6);
        // for(std::vector<int>::iterator it = new_nbr.begin() ; it != new_nbr.end(); it++){
        //     std::cout << *it << std::endl;
        // }
        // sp.addNumbers(new_nbr.begin(), new_nbr.end());

        std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
        std::cout << "LongestSpan  : " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}