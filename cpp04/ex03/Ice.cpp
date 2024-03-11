/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:47:06 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/11 20:01:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	this->type = "ice";
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(const Ice &cpy) : AMateria() {
	(void)cpy;
	this->type = "ice";
	std::cout << "Ice copy created" << std::endl;
}

Ice& Ice::operator=(const Ice &cpy) {
	(void)cpy;
	this->type = "ice";
	std::cout << "Ice assignment operator called" << std::endl;
	return (*this);
}

Ice::~Ice(void) {
	std::cout << "Ice destroyed" << std::endl;
}

AMateria *Ice::clone() const {
	AMateria *ice = new Ice();
	
	return (ice);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}