/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:51:30 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 11:22:44 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        std::cout << "rrf Name : " << rrf->getName() << std::endl;
        return 0;
    }
    catch(Intern::NotExestingForm &e)
    {
        std::cout << e.what() << std::endl;
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
}
