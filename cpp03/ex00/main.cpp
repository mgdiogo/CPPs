/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:55:40 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/18 22:07:04 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap a("snoop");
	a.attack("dog");
	a.takeDamage(9);
	a.beRepaired(1);
	a.takeDamage(3);
}