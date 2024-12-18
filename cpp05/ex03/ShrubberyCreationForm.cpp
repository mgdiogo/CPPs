/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:14:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/18 14:26:52 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137) , _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm("ShrubberyCreationForm", 145, 137) , _target(cpy._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy) {
	if (this != &cpy)
		this->_target = cpy._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	
	std::ofstream tree;
	tree.open((this->_target + "_shrubbery").c_str());
	tree << "    *\\" << std::endl;
	tree << "   /.\\" << std::endl;
	tree << "  /o..\\" << std::endl;
	tree << "  /..o\\" << std::endl;
	tree << " /.o..o\\" << std::endl;
	tree << " /...o.\\" << std::endl;
	tree << "/..o....\\" << std::endl;
	tree << "^^^[_]^^^\n" << std::endl;
	tree << "\n";
	tree << "    *\\" << std::endl;
	tree << "   /.\\" << std::endl;
	tree << "  /o..\\" << std::endl;
	tree << "  /..o\\" << std::endl;
	tree << " /.o..o\\" << std::endl;
	tree << " /...o.\\" << std::endl;
	tree << "/..o....\\" << std::endl;
	tree << "^^^[_]^^^\n" << std::endl;
	tree.close();
}