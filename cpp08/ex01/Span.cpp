/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:34:59 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/05 20:51:58 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : container(n) {}

Span::Span(const Span &cpy) {
	if (this != &cpy) {
		std::vector<unsigned int>::const_iterator it;
		for (it = cpy.container.begin(); it != cpy.container.end(); it++)
			this->container.push_back(*it);
	}
}