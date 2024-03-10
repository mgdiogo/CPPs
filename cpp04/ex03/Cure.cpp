/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:13:07 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 19:56:50 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
	this->type = "cure";
}

Cure::Cure(const Cure &cpy) : AMateria() {
	(void)cpy;
	this->type = "ice";
}

Cure& Cure::operator=(const Cure &cpy) {
	(void)cpy;
	this->type = "cure";
	return (*this);
}

Cure::~Cure(void) {
	std::cout << "Cure destroyed" << std::endl;
}

AMateria *Cure::clone() const {
	AMateria *cure = new Cure();
	
	return (cure);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}