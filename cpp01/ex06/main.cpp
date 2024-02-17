/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:41:05 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/06 22:25:04 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl complaint;
	
	if (argc == 2)
		complaint.complain(argv[1]);
	else
		std::cout << "Invalid arguments\n";
	return (0);
}