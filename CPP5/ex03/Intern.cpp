/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:51:23 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 11:21:05 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &src)
{

	if (this == &src)
		return *this;

	return *this;
}

AForm* makePresident(std::string target)
{
    return new PresidentialPardonForm(target);
} 

AForm* makeShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
} 

AForm* makeRobot(std::string target)
{
    return new RobotomyRequestForm(target);
} 

Intern::NotExestingForm::NotExestingForm() : msg("Form is not existing"){};

const char* Intern::NotExestingForm::what() const throw(){ return msg;}

AForm *Intern::makeForm( std::string form_name,  std::string form_target)
{
	int i = 0;
    AForm *(*Forms[])( std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string available_forms[] = {"president request", "robotomy request", "shrubbery request"};

	while (i < 3 && form_name != available_forms[i])
		i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << form_name << "with target : " << form_target << std::endl;
			return (Forms[0](form_target));
		case 1:
			std::cout << "Intern creates " << form_name << "with target : " << form_target << std::endl;
			return (Forms[1](form_target));
		case 2:
			std::cout << "Intern creates " << form_name << "with target : " << form_target << std::endl;
			return (Forms[2](form_target));
		default:
			throw NotExestingForm();
	}

}
