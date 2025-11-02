/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiouane <sdiouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:49:10 by sdiouane          #+#    #+#             */
/*   Updated: 2025/02/18 15:10:01 by sdiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"

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