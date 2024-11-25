/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:15:08 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/25 18:09:04 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _data_int(0) {
	std::cout << "I'm data and my value is " << _data_int << std::endl;
}

Data::Data(const Data &cpy) { *this = cpy; }

Data& Data::operator=(const Data &cpy) {
	if (this != &cpy)
		*this = cpy;
	return (*this);
}

Data::~Data() {
	std::cout << "Data says bye bye" << std::endl;
}