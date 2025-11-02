/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:50:01 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 15:10:16 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() : msg("The grade is too high")
{}

Bureaucrat::GradeTooLowException::GradeTooLowException() : msg("The grade is too low")
{}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return msg;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return msg;
}

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1 )
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat& obj) : name(obj.name), grade(obj.grade) {}

Bureaucrat& Bureaucrat::operator=( Bureaucrat& other) {
    if (this != &other) {
        grade = other.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}




const std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}


void Bureaucrat::setGrade(int value) {
    grade = value;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {

    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}


void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } catch (AForm::GradeTooLowException &e) {
        std::cout << name << " couldn't sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}


void Bureaucrat::executeForm(AForm const &form) const {
    try {
        form.execute(*this);
        std::cout << this->name << " executed " << form.getName() << std::endl;
    } catch (AForm::FormNotSignedException &e) {
        std::cout << this->name << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}


void Bureaucrat::increment_grade()
{
	if (grade == 1)
		throw GradeTooHighException();
	else
	    grade--;
}

void Bureaucrat::decrement_grade()
{
	if (grade == 150)
		throw GradeTooLowException();
	else
		grade++;
}