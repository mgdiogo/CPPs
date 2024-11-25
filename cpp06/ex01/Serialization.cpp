/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:26:00 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/25 18:06:21 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {}

Serialization::Serialization(const Serialization &cpy) { *this = cpy; }

Serialization& Serialization::operator=(const Serialization &cpy) { 
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

Serialization::~Serialization() {}

uintptr_t Serialization::serialize(Data* ptr) {
	uintptr_t result;

	result = reinterpret_cast<uintptr_t>(ptr);
	return (result);
}

Data* Serialization::deserialize(uintptr_t raw) {
	Data *result;

	result = reinterpret_cast<Data*>(raw);
	return (result);
}