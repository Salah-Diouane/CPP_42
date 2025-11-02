/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:29:56 by sdiouane          #+#    #+#             */
/*   Updated: 2025/03/13 01:07:58 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int value) : nbr(value) 
{
}

Span::~Span()
{}

Span::Span(const Span &other)
{
	*this = other;
}
     
Span& Span::operator=(const Span &other)
{
	if (this != &other)
    {
        this->nbr = other.nbr;
        this->vec = other.vec;
    }
    return (*this);
}

void Span::addNumber(int number)
{
    if (vec.size() >= nbr)
    {
        throw std::overflow_error("Vector is full !!");
    }
    else
        vec.push_back(number);
}

int Span::longestSpan()
{
    if (vec.size()  < 2)
        throw std::logic_error("at least 2 elements");
    int longest;
    
    sort(vec.begin(), vec.end());
    longest = vec.back() - vec.front();
    return longest;
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw std::logic_error("at least 2 elements");
        
    sort(vec.begin(), vec.end());

	int min = vec[1] - vec[0];
	for (unsigned int i = 1; i < vec.size(); i++)
	{
		if (vec[i] - vec[i - 1] < min)
			min = vec[i] - vec[i - 1];
	}
    return min;
}

