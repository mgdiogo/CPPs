/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:30:55 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 13:03:09 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal() {
	this->_type = cpy._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cpy) {
	if (this != &cpy)
		this->_type = cpy._type;
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << this->_type << ": meowwww!" << std::endl;
}