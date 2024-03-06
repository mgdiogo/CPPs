/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:08:07 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 13:02:13 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	this->_type = "undefined";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	this->_type = cpy._type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &cpy) {
	if (this != &cpy)
		this->_type = cpy._type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Animal noises oO" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}