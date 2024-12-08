/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:29:47 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/08 19:21:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <limits>

class Span {
	private:
		std::vector<int> container;
		unsigned int _maxSize;
		Span();
	public:
		Span(unsigned int n);
		Span(const Span &cpy);
		Span& operator=(const Span &cpy);
		~Span();
		void addNumber(unsigned int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
		
};

#endif