/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:27:05 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/18 23:37:50 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap constructor called with the name " << this->Name << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor was called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " 
			<< this->attack_dmg << " points of damage" << std::endl;
	}
}

void FragTrap::highFiveGuys(void) {
	if (this->hit_points > 0)
		std::cout << "FragTrap is requesting an high five!" << std::endl;
}