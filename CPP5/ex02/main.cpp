/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:12 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 15:07:49 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {

        Bureaucrat b_1("salah", 137);
        Bureaucrat b_2("adam", 45);
        Bureaucrat b_3("ahmed", 3);
    
        ShrubberyCreationForm shrubbery("shrubbery");
        RobotomyRequestForm robotomy("robotomy");
        PresidentialPardonForm pardon("pardon");

        // ShrubberyCreationForm :
        b_1.signForm(shrubbery);
        b_1.executeForm(shrubbery);

        // RobotomyRequestForm :
        b_2.signForm(robotomy);
        b_2.executeForm(robotomy);
        
        // PresidentialPardonForm :
        b_3.signForm(pardon);
        b_3.executeForm(pardon);


    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (AForm::FormNotSignedException & e)
    {
        std::cout  << e.what() << std::endl;
    }
    catch (AForm::AlreadySigned & e)
    {
        std::cout  << e.what() << std::endl;
    }
    
    return 0;
}
