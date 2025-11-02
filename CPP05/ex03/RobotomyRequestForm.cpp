/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:51:58 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 15:06:31 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj), target(obj.target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other)
        this->target = other.target;
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (!getIs_signed())
        throw FormNotSignedException();
    if (executor.getGrade() > getGradexecute())
        throw GradeTooLowException();

    std::cout << "Bzzzz... Drilling noises..." << std::endl;
    srand(time(0));
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << target << "!" << std::endl;
}
