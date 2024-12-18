/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:51:30 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/18 14:26:29 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &cpy) {
	*this = cpy;
}

Intern& Intern::operator=(const Intern &cpy) {
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

Intern::~Intern(void) {}

const char *Intern::FormNotCreated::what(void) const throw() {
	return ("Invalid form name, form was not created.");
}

AForm *Intern::makeForm(std::string form_name, std::string target) {
	AForm *form;
	
	form = NULL;
	if (form_name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (form_name == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else if (form_name == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
		throw FormNotCreated();
	return (form);
}
