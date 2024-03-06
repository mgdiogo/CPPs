/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:50:49 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 12:53:39 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->_type = "undefined";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	this->_type = cpy._type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &cpy) {
	if (this != &cpy)
		this->_type = cpy._type;
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal noises oO" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}