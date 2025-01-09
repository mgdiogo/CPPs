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

	int j = 0;

	std::string forms[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; ++i) {
		if (form_name == forms[i])
			j = i + 1;
	}

	switch (j) {
		case 1:
			form = new RobotomyRequestForm(target);
			break ;
		case 2:
			form = new PresidentialPardonForm(target);
			break ;
		case 3:
			form = new ShrubberyCreationForm(target);
			break ;
		default:
			throw Intern::FormNotCreated();
	}
	return (form);
}
