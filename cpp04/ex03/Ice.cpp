/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:47:06 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 19:51:39 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	this->type = "ice";
}

Ice::Ice(const Ice &cpy) : AMateria() {
	(void)cpy;
	this->type = "ice";
}

Ice& Ice::operator=(const Ice &cpy) {
	(void)cpy;
	this->type = "ice";
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