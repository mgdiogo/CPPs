/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:17:21 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/18 23:20:29 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap constructor was called with the name " << this->Name << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor was called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " 
			<< this->attack_dmg << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}