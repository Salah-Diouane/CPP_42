/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:45 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 13:24:08 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat Bureaucrat("salah", 141);
        Form f1("Contrat", true, 140, 1);
        std::cout << f1 << std::endl;
        
        // Bureaucrat.increment_grade();
        f1.beSigned(Bureaucrat);
        Bureaucrat.signForm(f1);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout  << e.what() << std::endl;
    }
}
