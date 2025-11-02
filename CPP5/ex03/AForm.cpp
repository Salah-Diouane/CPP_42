/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:51:01 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/15 17:07:46 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), is_signed(false), grade_sign(1), grade_execute(1) {}

AForm::AForm(const std::string name, bool value, int grad_s, int grad_e) : name(name), is_signed(value)
{
    if (grad_s < 1 || grad_e < 1)
        throw GradeTooHighException();
    if (grad_s > 150 || grad_e > 150)
        throw GradeTooLowException();
    grade_sign = grad_s;
    grade_execute = grad_e;
}

AForm::AForm(const AForm& obj)
    : name(obj.name), is_signed(obj.is_signed), grade_sign(obj.grade_sign), grade_execute(obj.grade_execute) {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other)
        this->is_signed = other.is_signed;
    return *this;
}

AForm::~AForm() {}

AForm::GradeTooHighException::GradeTooHighException() : msg("The grade is too high") {}

AForm::GradeTooLowException::GradeTooLowException() : msg("The grade is too low") {}

AForm::FormNotSignedException::FormNotSignedException() : msg("Form is not signed!") {}

AForm::AlreadySigned::AlreadySigned() : msg("Form already signed!") {}

const char* AForm::GradeTooHighException::what() const throw(){
    return msg;
}

const char* AForm::GradeTooLowException::what() const throw(){
    return msg;
}

const char* AForm::FormNotSignedException::what() const throw(){
    return msg;
}

const char* AForm::AlreadySigned::what() const throw(){
    return msg;
}

void AForm::beSigned(Bureaucrat obj) {
    if (obj.getGrade() > this->grade_sign)
        throw GradeTooLowException();
    if (this->is_signed == true)
    {
        throw AlreadySigned();
    }
    this->is_signed = true;
}

void AForm::setIs_signed(bool value) {
    this->is_signed = value;
}

void AForm::setGradsign(int value) {
    this->grade_sign = value;
}

void AForm::setGradexecute(int value) {
    this->grade_execute = value;
}

bool AForm::getIs_signed() const {
    return is_signed;
}

int AForm::getGradsign() const {
    return grade_sign;
}

int AForm::getGradexecute() const {
    return grade_execute;
}

const std::string AForm::getName() const {
    return name;
}
