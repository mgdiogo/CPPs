/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:55:02 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/23 22:13:52 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int 	i;
	char	*str;
	
	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (argv && str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (char)toupper(str[i]);
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = (char)tolower(str[i]);
			i++;
		}
		std::cout << str << std::endl;
	}
	else
		std::cout << "Invalid arguments!" << std::endl;
	return (0);
}