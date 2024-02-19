/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:55:40 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/19 21:28:10 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	//ClapTrap a("snoop");
	ScavTrap b("Dummy");
	ScavTrap c("Gummy");
	ScavTrap a(c);
	c = b;
	//a.attack("dog");
	//a.takeDamage(9);
	//a.beRepaired(1);
	//a.takeDamage(3);
	a.attack("joao");
	b.attack("joao1");
	c.attack("joao2");
	b.guardGate();
}