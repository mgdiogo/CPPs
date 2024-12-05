/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:29:47 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 20:43:39 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <iterator>

class Span {
	private:
		std::vector<unsigned int> container;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &cpy);
		Span& operator=(const Span &cpy);
		~Span();
		void addNumber(unsigned int n);
		int shortestSpan(void);
		int longestSpan(void);
		
};

#endif