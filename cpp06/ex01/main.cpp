/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:37:33 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/06 15:56:50 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <cassert>

int main(void) {
	Data obj;
	Data *a = &obj;
	uintptr_t b;
	
	a->value = "test";
	std::cout << a << std::endl;
	b = Serialization::serialize(a);
	std::cout << b << std::endl;
	Data *deserialized = Serialization::deserialize(b);
	std::cout << deserialized << std::endl;
	
	if (a == deserialized)
		std::cout << "Pointers match!" << std::endl;
	else
		std::cout << "Something went wrong!" << std::endl;
	std::cout << deserialized->value << std::endl;
	return (0);
}