/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:18:09 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/10 19:02:56 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {}

AMateria::AMateria(const std::string &type) {
	this->type = type;
}

AMateria::AMateria(const AMateria &cpy) {
	this->type = cpy.type;
}

AMateria& AMateria::operator=(const AMateria &cpy) {
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destroyed" << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	std::cout << this->type << " was used on " << target.getName() << std::endl;
}