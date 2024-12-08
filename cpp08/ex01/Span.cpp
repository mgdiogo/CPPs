/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:34:59 by mpedroso          #+#    #+#             */
/*   Updated: 2024/12/08 19:46:23 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span &cpy) : container(cpy.container), _maxSize(cpy._maxSize) {}

Span& Span::operator=(const Span &cpy) {
	if (this != &cpy) {
		if (cpy.container.size() > this->_maxSize)
			throw std::out_of_range ("Failed to assign object, vector maximum size exceeded!");
		this->container = cpy.container;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(unsigned int n) {
	if (this->container.size() == this->_maxSize)
		throw std::out_of_range("Vector is full, cannot add any more elements!");
	this->container.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->container.size() == _maxSize)
		throw std::out_of_range("Vector is full, cannot add any more elements!");
	unsigned int size = std::distance(begin, end);
	if (_maxSize < this->container.size() + size)
		throw std::out_of_range("Vector can't fit these numbers!");
	this->container.insert(this->container.end(), begin, end);
}

int Span::longestSpan(void) {
	if (this->container.size() <= 1)
		throw std::logic_error("Not enough elements inside the vector to calculate longest span!");
	int maxValue = *std::max_element(this->container.begin(), this->container.end());
	int minValue = *std::min_element(this->container.begin(), this->container.end());

	return (maxValue - minValue);
}

int Span::shortestSpan(void) {
	if (this->container.size() <= 1)
		throw std::logic_error("Not enough elements inside the vector to calculate shortest span!");
	int difference;
	int shortest;
	shortest = std::numeric_limits<int>::max();
	for (size_t i = 0; i < this->container.size(); ++i) {
		if (container[i + 1]) {	
			difference = container[i + 1] - container[i];
			if (difference < shortest)
				shortest = difference;
		}
	}
	
	return (shortest);
}