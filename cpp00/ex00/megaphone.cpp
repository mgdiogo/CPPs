/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:55:02 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/23 23:02:48 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc > 1)
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
			{
				argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
			std::cout << " ";
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}