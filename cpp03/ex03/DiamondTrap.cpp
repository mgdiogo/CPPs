/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:49:45 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 00:37:48 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->Name = name;
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_dmg = 30;
	std::cout << "DiamondTrap constructor was called with the name " << this->Name << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor was called" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap -> this is " << this->Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}