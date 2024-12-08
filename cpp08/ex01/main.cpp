/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:38:38 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/08 19:56:48 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	try {
		Span container(5);
		container.addNumber(1);
		container.addNumber(4);
		container.addNumber(7);
		container.addNumber(10);
		container.addNumber(13);
		
		std::cout << "Longest span -> " << container.longestSpan() << std::endl;
		std::cout << "shortest span -> " << container.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Span container(5);
		container.addNumber(1);
		container.addNumber(4);
		container.addNumber(7);
		container.addNumber(10);
		container.addNumber(13);
		container.addNumber(16);
		
		std::cout << "Longest span -> " << container.longestSpan() << std::endl;
		std::cout << "shortest span -> " << container.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Span container(5);
		std::vector<int> numbers;
		
		numbers.push_back(1);
		numbers.push_back(4);
		numbers.push_back(7);
		numbers.push_back(10);
		numbers.push_back(13);
		
		container.addNumber(numbers.begin(), numbers.end());
		
		std::cout << "Longest span -> " << container.longestSpan() << std::endl;
		std::cout << "shortest span -> " << container.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Span container(5);
		std::vector<int> numbers;
		
		numbers.push_back(1);
		numbers.push_back(4);
		numbers.push_back(7);
		numbers.push_back(10);
		numbers.push_back(13);
		numbers.push_back(16);
		
		container.addNumber(numbers.begin(), numbers.end());
		
		std::cout << "Longest span -> " << container.longestSpan() << std::endl;
		std::cout << "shortest span -> " << container.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span container(5);
		Span container2(7);
		std::vector<int> numbers;

		numbers.push_back(1);
		numbers.push_back(4);
		numbers.push_back(7);
		numbers.push_back(10);
		numbers.push_back(13);
		numbers.push_back(16);
		numbers.push_back(19);

		container2.addNumber(numbers.begin(), numbers.end());
		container = container2;
		std::cout << "Longest span -> " << container.longestSpan() << std::endl;
		std::cout << "shortest span -> " << container.shortestSpan() << std::endl;
		
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}