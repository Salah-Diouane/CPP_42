/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:39 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 12:25:40 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(){}

Form::Form(const std::string name, bool value, int grad_s, int grad_e) : name(name) {
    if (grad_s < 1 || grad_e < 1)
        throw GradeTooHighException();
    else if (grad_s > 150 || grad_e > 150)
        throw GradeTooLowException();
    this->grade_sign = grad_s;
    this->grade_execute = grad_e;
    this->is_signed = value;
}

Form::Form(const Form& obj) : name(obj.name), is_signed(obj.is_signed), grade_sign(obj.grade_sign), grade_execute(obj.grade_execute) {}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        this->is_signed = other.is_signed;
        this->grade_sign = other.grade_sign;
        this->grade_execute = other.grade_execute;
    }
    return *this;
}

Form::~Form() {}

void Form::setIs_signed(bool value) {
    this->is_signed = value;
}

void Form::setGradsign(int value) {
    this->grade_sign = value;
}

void Form::setGradexecute(int value) {
    this->grade_execute = value;
}

bool Form::getIs_signed() const {
    return is_signed;
}

int Form::getGradsign() const {
    return grade_sign;
}

int Form::getGradexecute() const {
    return grade_execute;
}

const std::string Form::getName() const {
    return name;
}

Form::GradeTooHighException::GradeTooHighException() : msg("The grade is too high") {}

Form::GradeTooLowException::GradeTooLowException() : msg("The grade is too low") {}

const char* Form::GradeTooHighException::what() const throw(){ return msg; }

const char* Form::GradeTooLowException::what() const throw(){ return msg; }

std::ostream& operator<<(std::ostream& os, const Form& b) {
    if (b.getIs_signed())
        os << "Form: " << b.getName() << " Form grade signed " << b.getGradsign()
           << " , Form grade execute " << b.getGradexecute() << "\n";
    else
        os << "Form: " << b.getName() << " Form grade not signed " << b.getGradsign()
           << " , Form grade execute " << b.getGradexecute() << "\n";

    return os;
}

void Form::beSigned(Bureaucrat obj) {
    if (obj.getGrade() > grade_sign)
        throw GradeTooLowException();
    is_signed = true;
}
