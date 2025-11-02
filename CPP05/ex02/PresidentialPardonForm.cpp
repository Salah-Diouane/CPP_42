/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:30 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 14:48:12 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", false, 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj), target(obj.target)
{
    
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other)
        this->target = other.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (!getIs_signed())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradexecute())
        throw GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}