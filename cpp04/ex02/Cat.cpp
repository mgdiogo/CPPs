/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:30:55 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 19:21:15 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->brain = new Brain();
	*this->brain->ideas = "i am a cat";
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal() {
	this->brain = new Brain();
	*this->brain->ideas = *cpy.brain->ideas;
	this->_type = cpy._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cpy) {
	if (this != &cpy)
	{
		delete this->brain;
		this->brain = new Brain();
		*this->brain->ideas = *cpy.brain->ideas;
		this->_type = cpy._type;
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << this->_type << ": meowwww!" << std::endl;
}
