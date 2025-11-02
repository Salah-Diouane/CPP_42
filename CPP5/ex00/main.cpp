/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:19 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 10:47:10 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat* b1 = new Bureaucrat("salah", 151);
        std::cout << *b1 << std::endl;
        delete b1;
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    return 0;
}
