/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:09:43 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/24 21:15:30 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {
	std::cout << "Bureaucrat default constructor called"  << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name), _grade(cpy._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &cpy) {
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &cpy)
		this->_grade = cpy._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (this->_grade < 1)
		throw(GradeTooHighException());
	else if (this->_grade > 150)
		throw(GradeTooLowException());
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("The grade is already maxed out or exceeds it's max value");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
	return ("The grade is already at it's lowest or exceeds it's lowest value");
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& b) {
	return (os << b.getName() << ", bureaucrat grade " << b.getGrade());
}

void Bureaucrat::increment(void) {
	if (this->_grade <= 1)
		throw(GradeTooHighException());
	this->_grade--;
}

void Bureaucrat::decrement(void) {
	if (this->_grade >= 150)
		throw(GradeTooLowException());
	this->_grade++;
}

void Bureaucrat::signForm(Form &f) {
	try {
		f.beSigned(*this);
		std::cout << this->_name << " signed form " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << this->_name << " couldn't sign form because " << e.what() << std::endl;
	}
}