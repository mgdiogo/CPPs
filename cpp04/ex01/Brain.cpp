/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:58:53 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 19:20:56 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain constructor called" << std::endl;
	*this->ideas = "hello, this is brain";
}

Brain::Brain(const Brain &cpy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this->ideas = *cpy.ideas;
}

Brain& Brain::operator=(const Brain &cpy) {
	if (this != &cpy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}