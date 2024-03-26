/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:11:42 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/26 18:09:12 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _sign_grade(150), _exec_grade(150), _signed(false) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _sign_grade(sign), _exec_grade(exec), _signed(false) {
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &cpy) : _name(cpy._name), _sign_grade(cpy._sign_grade), _exec_grade(cpy._exec_grade), _signed(cpy._signed) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form &cpy) {
	if (this != &cpy)
		this->_signed = cpy._signed;
	return (*this);
}

Form::~Form(void) {
	std::cout << "Form destructor called" << std::endl;
}

const char *Form::GradeTooHighException::what(void) const throw(){
	return (" the bureaucrat's grade is higher than required");
}

const char *Form::GradeTooLowException::what(void) const throw(){
	return (" the bureaucrat's grade is lower than required");
}

const std::string Form::getName(void) const {
	return (this->_name);
}
int Form::getSignGrade(void) const {
	return (this->_sign_grade);
}
int Form::getExecGrade(void) const {
	return (this->_exec_grade);
}
bool Form::getSigned(void) const {
	return (this->_signed);
}
void Form::beSigned(Bureaucrat b) {
	if (b.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &os, const Form& f) {
	return (os << "Form [" << f.getName() << "] requires grade " << f.getSignGrade() << " for it to be signed and " << f.getExecGrade() << " grade to be executed, currently the form is " << (f.getSigned() ? "signed" : "not signed"));
}