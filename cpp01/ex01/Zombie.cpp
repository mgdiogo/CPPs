/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:43:30 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/26 14:41:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	this->_name = "RandomZombie";
	std::cout << "Default " << this->_name << " constructed!" << std::endl; 
}

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Zombie " << name << " constructed!" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " has been destroyed!" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}