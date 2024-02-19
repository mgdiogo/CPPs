/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:17:21 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 22:55:47 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->Name = "Undefined";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap default constructor called with the name [" << this->Name << "]" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap constructor was called with the name [" << this->Name << "]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap (cpy.Name) {
	std::cout << "ScavTrap copy constructor was called with the name [" << cpy.Name << "]" << std::endl;
	this->Name = cpy.Name;
	this->hit_points = cpy.hit_points;
	this->energy_points = cpy.energy_points;
	this->attack_dmg = cpy.attack_dmg;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &cpy) {
	if (this != &cpy)
	{
		this->Name = cpy.Name;
		this->hit_points = cpy.hit_points;
		this->energy_points = cpy.energy_points;
		this->attack_dmg = cpy.attack_dmg;
	}

	std::cout << "ScavTrap name is now [" << this->Name << "]" << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor was called with the name [" << this->Name << "]" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " 
			<< this->attack_dmg << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap [" << this->Name << "]" << " is now in gate keeper mode" << std::endl;
}