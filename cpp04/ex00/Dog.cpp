/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:45:47 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 13:03:24 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal() {
	this->_type = cpy._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &cpy) {
	if (this != &cpy)
		this->_type = cpy._type;
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << this->_type << ": woof woof!" << std::endl;
}