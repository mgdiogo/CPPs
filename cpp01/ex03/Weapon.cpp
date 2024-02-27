/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:28:25 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/26 19:18:19 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
	std::cout << "Weapon constructor called for type " << this->_type << std::endl;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon destructor called for type " << this->_type << std::endl;
}

const	std::string &Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(const std::string &type) {
	this->_type = type;
}