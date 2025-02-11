/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:04:47 by mpedroso          #+#    #+#             */
/*   Updated: 2025/02/11 15:39:38 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) {
	int random;
	
	std::srand(time(0));
	random = std::rand() % 3;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p) {
	std::cout << "*Identify using pointer as param*" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "Identified class A!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified class B!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified class C!" << std::endl;
	else
		std::cout << "Error identifying type!" << std::endl;
}

void identify (Base &p) {
	std::cout << std::endl << "*Identify using reference as param*" << std::endl;
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Identified class A!" << std::endl;
		return ;
	}
	catch (std::exception &e) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "Identified class B!" << std::endl;
			return ;
		}
		catch (std::exception &e1) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "Identified class C!" << std::endl;
				return ;
			}
			catch (std::exception &e2) {
				std::cout << "Error identifying type!" << std::endl;
			}
		}
	}
}

int main(void) {
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	delete(base);
	return (0);
}