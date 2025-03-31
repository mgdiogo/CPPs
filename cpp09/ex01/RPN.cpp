/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:36:22 by mpedroso          #+#    #+#             */
/*   Updated: 2025/03/31 16:33:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

void RPN::addToStack(int n) {
	_stack.push(n);
}

void RPN::operation(char op) {
	if (_stack.size() < 2 || _stack.empty())
		throw std::invalid_argument("Error: invalid stack.");
	
	int res;
	int n1 = _stack.top();
	_stack.pop();
	int n2 = _stack.top();
	_stack.pop();

	if(op == '/' && n1 == 0)
		throw std::invalid_argument("Error: can't divide by 0.");
	switch (op) {
		case ('+'):
			res = n2 + n1;
			_stack.push(res);
			break ;
		case ('-'):
			res = n2 - n1;
			_stack.push(res);
			break ;
		case ('/'):
			res = n2 / n1;
			_stack.push(res);
			break ;
		case ('*'):
			res = n2 * n1;
			_stack.push(res);
			break ;
		default:
			throw std::invalid_argument("Error: invalid operation.");
	}
}

void RPN::getResult(void) {
	std::cout << _stack.top() << std::endl;
}

int RPN::getSize(void) {
	return (_stack.size());
}