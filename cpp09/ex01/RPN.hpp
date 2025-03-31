/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:33:27 by mpedroso          #+#    #+#             */
/*   Updated: 2025/03/31 16:11:20 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>

class RPN {
	private:
		std::stack<int> _stack;
		RPN(const RPN &cpy);
		RPN& operator=(const RPN &cpy);
	public:
		RPN();
		~RPN();
		void addToStack(int n);
		void operation(char op);
		void getResult(void);
		int getSize();
};

#endif