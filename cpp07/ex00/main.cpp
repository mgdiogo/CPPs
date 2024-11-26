/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:28:09 by mpedroso          #+#    #+#             */
/*   Updated: 2024/11/26 14:50:32 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>

void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <class T>

T min(T a, T b) {
	if (a > b)
		return (b);
	else if (a < b)
		return (a);
	return (b);
}

template <class T>

T max(T a, T b) {
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	return (b);
}

int main(void) {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << "Min: " << ::min(a, b) << std::endl;
	std::cout << "Max: " << ::max(a, b) << std::endl;
	
	std::string c = "test1";
	std::string d = "test2";
	
	::swap(c, d);
	std::cout << c << " " << d << std::endl;
	std::cout << "Min: " << ::min(c, d) << std::endl;
	std::cout << "Max: " << ::max(c, d) << std::endl;

	return (0);
}