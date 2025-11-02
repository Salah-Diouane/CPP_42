/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:25:11 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 01:06:18 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int nbr;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int value);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);
        void addNumber(int number);
        
        template <typename Iterator>
        void addNumbers(Iterator begin, Iterator end) {
            if (std::distance(begin, end) + vec.size() > nbr) {
                throw std::overflow_error("Vector is full !!");
            }
            vec.insert(vec.end(), begin, end);
        }
        
        int shortestSpan();
        int longestSpan();
};
