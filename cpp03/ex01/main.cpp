/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:55:40 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/18 23:20:38 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	//ClapTrap a("snoop");
	ScavTrap b("lul");
	//a.attack("dog");
	//a.takeDamage(9);
	//a.beRepaired(1);
	//a.takeDamage(3);
	b.attack("burro");
	b.guardGate();
}