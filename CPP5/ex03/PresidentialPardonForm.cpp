/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:51:50 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 15:06:19 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj), target(obj.target)
{}
PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!getIs_signed())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradexecute())
        throw GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
