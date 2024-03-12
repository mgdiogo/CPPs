/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:06:01 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 13:07:15 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->brain = new Brain();
	*this->brain->ideas = "i am a cat";
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal() {
	this->brain = new Brain();
	*this->brain->ideas = *cpy.brain->ideas;
	this->_type = cpy._type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cpy) {
	if (this != &cpy)
	{
		delete this->brain;
		this->brain = new Brain();
		*this->brain->ideas = *cpy.brain->ideas;
		this->_type = cpy._type;
	}
	std::cout << "WrongCat assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << this->_type << ": this meowing seems kinda wrong!" << std::endl;
}