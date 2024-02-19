/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:27:39 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 21:05:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Constructor was called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor was called" << std::endl;
	*this = cpy;
}

Fixed& Fixed::operator=(const Fixed &cpy) {
	std::cout << "Copy assignment operator was called" << std::endl;
	if (this != &cpy)
		this->fixed_point = cpy.fixed_point;
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw << this->fixed_bits;
}