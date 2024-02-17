/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:41:05 by mpedroso          #+#    #+#             */
/*   Updated: 2024/02/06 21:46:35 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl complaint;
	
	complaint.complain("INFO");
	complaint.complain("ERROR");
	complaint.complain("WARNING");
	complaint.complain("DEBUG");
}