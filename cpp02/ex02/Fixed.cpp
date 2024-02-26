/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:42:37 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 21:05:48 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	//std::cout << "Default constructor was called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int value) {
	//std::cout << "int constructor was called" << std::endl;
	setRawBits(value);
}

Fixed::Fixed(const float value) {
	//std::cout << "float constructor was called" << std::endl;
	this->fixed_point = roundf(value * (1 << this->fixed_bits));
}

Fixed::Fixed(const Fixed &cpy) {
	//std::cout << "Copy constructor was called" << std::endl;
	this->fixed_point = cpy.fixed_point;
}

Fixed& Fixed::operator=(const Fixed &cpy) {
	//std::cout << "Copy assignment operator was called" << std::endl;
	if (this != &cpy)
		this->fixed_point = cpy.fixed_point;
	return (*this);
}

float Fixed::toFloat(void) const {
	return (float(this->fixed_point) / (1 << this->fixed_bits));
}

int Fixed::toInt(void) const {
	return (this->fixed_point >> this->fixed_bits);
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw << this->fixed_bits;
}

Fixed& Fixed::min(Fixed& fix1, Fixed &fix2) {
	if (fix1.fixed_point < fix2.fixed_point)
		return (fix1);
	return (fix2);
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2) {
	if (fix1.fixed_point < fix2.fixed_point)
		return (fix1);
	return (fix2);
}

Fixed& Fixed::max(Fixed& fix1, Fixed &fix2) {
	if (fix1.fixed_point > fix2.fixed_point)
		return (fix1);
	return (fix2);
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2) {
	if (fix1.fixed_point > fix2.fixed_point)
		return (fix1);
	return (fix2);
}

bool Fixed::operator==(const Fixed& fixed) const {
	return (this->fixed_point == fixed.fixed_point);
}

bool Fixed::operator!=(const Fixed& fixed) const {
	return (this->fixed_point != fixed.fixed_point);
}

bool Fixed::operator>(const Fixed& fixed) const {
	return (this->fixed_point > fixed.fixed_point);
}

bool Fixed::operator<(const Fixed& fixed) const {
	return (this->fixed_point < fixed.fixed_point);
}

bool Fixed::operator>=(const Fixed& fixed) const {
	return (this->fixed_point >= fixed.fixed_point);
}

bool Fixed::operator<=(const Fixed& fixed) const {
	return (this->fixed_point <= fixed.fixed_point);
}

Fixed Fixed::operator+(const Fixed& fixed) {
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed& fixed) {
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed& fixed) {
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed) {
	return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++() {
	++this->fixed_point;

	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp;
	
	temp = *this;
	this->fixed_point++;

	return (temp);
}

Fixed Fixed::operator--() {
	--this->fixed_point;

	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp;
	
	temp = *this;
	--this->fixed_point;

	return (temp);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed) {
	stream << fixed.toFloat();
	return (stream);
}