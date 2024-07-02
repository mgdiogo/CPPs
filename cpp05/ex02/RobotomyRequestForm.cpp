/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:19:21 by mpedroso          #+#    #+#             */
/*   Updated: 2024/07/02 15:42:41 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm("RobotomyRequestForm", 72, 45), _target(cpy._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy) {
	if (this != &cpy)
		this->_target = cpy._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Form destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	int	chance;
	
	AForm::execute(executor);
	
	std::srand(std::time(0));
	chance = std::rand() % 2;
	
	std::cout << "*DRILLING NOISES*" << std::endl;
	if (chance == 0)
		std::cout << this->_target << " robotomy was successfull!" << std::endl;
	else
		std::cout << this->_target << " robotomy failed!" << std::endl;
}