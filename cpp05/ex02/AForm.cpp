/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:11:42 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/02 13:29:02 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _sign_grade(150), _exec_grade(150), _signed(false) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int sign, int exec) : _name(name), _sign_grade(sign), _exec_grade(exec), _signed(false) {
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const AForm &cpy) : _name(cpy._name), _sign_grade(cpy._sign_grade), _exec_grade(cpy._exec_grade), _signed(cpy._signed) {
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &cpy) {
	if (this != &cpy)
		this->_signed = cpy._signed;
	return (*this);
}

AForm::~AForm(void) {
	std::cout << "AForm destructor called" << std::endl;
}

const char *AForm::GradeTooHighException::what(void) const throw(){
	return (" the bureaucrat's grade is higher than required.");
}

const char *AForm::GradeTooLowException::what(void) const throw(){
	return (" the bureaucrat's grade is lower than required.");
}
const char *AForm::FormNotSigned::what(void) const throw(){
	return (" form is not signed!");
}

const char *AForm::FormNotExecuted::what(void) const throw(){
	return (" the bureaucrat's grade is too low to execute this form.");
}

const std::string AForm::getName(void) const {
	return (this->_name);
}
int AForm::getSignGrade(void) const {
	return (this->_sign_grade);
}
int AForm::getExecGrade(void) const {
	return (this->_exec_grade);
}
bool AForm::getSigned(void) const {
	return (this->_signed);
}
void AForm::beSigned(Bureaucrat b) {
	if (b.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(const Bureaucrat &executor) const {
	if (!getSigned())
		throw AForm::FormNotSigned();
	if (executor.getGrade() > this->_exec_grade)
		throw AForm::FormNotExecuted();
}

std::ostream& operator<<(std::ostream &os, const AForm& f) {
	return (os << "AForm [" << f.getName() << "] requires grade " << f.getSignGrade() << " for it to be signed and " << f.getExecGrade() << " grade to be executed, currently the form is " << (f.getSigned() ? "signed" : "not signed"));
}