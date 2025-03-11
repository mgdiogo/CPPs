/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:06:55 by mpedroso          #+#    #+#             */
/*   Updated: 2025/03/11 14:47:33 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {
	MutantStack<int> mstack;
	MutantStack<int>::iterator b = mstack.begin();

	mstack.push(3);
	mstack.push(6);
	mstack.push(9);
	mstack.push(12);

	std::cout << "Elements inside the stack using iterator" << std::endl;
	std::cout << "-------------------------" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout <<  "[" << *it << "]" << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Stack size -> " << mstack.size() << std::endl;
	std::cout << "Stack top element -> " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack top element after pop -> " << mstack.top() << std::endl;
	std::cout << "Elements inside the stack after pop" << std::endl;
	std::cout << "-------------------------" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout <<  "[" << *it << "]" << std::endl;
	std::cout << "-------------------------" << std::endl;
	mstack.push(12);
	std::cout << "First element in the stack -> " << *b << std::endl;
	b++;
	std::cout << "Second element in the stack -> " << *b << std::endl;
	std::stack<int> s(mstack);
	return (0);
}