/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:46:12 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/18 13:50:02 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 25), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 25), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm("PresidentialPardonForm", 25, 25), _target(cpy._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	if (this != &cpy)
		this->_target = cpy._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std:: endl;
}
