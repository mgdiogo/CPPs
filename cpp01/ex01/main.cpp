/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:20:21 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/26 14:37:23 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		n;
	Zombie	*zombie;
	
	n = 5;
	zombie = zombieHorde(n, "jonas");
	for (int i = 0; i < n; i++)
		zombie[i].announce();
	delete[](zombie);
	return (0);
}