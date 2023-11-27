/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:58:14 by mpedroso          #+#    #+#             */
/*   Updated: 2023/11/27 16:34:15 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	word;
		std::string	buffer;
		std::string infile = argv[1];
		std::string	outfile = infile + ".replace";
		
		std::ifstream file_in(infile.c_str());
		if (!file_in)
		{
			std::cout << "Error opening file!\n";
			return (1);
		}
		std::ofstream file_out(outfile.c_str());
		while (std::getline(file_in, buffer))
		{
			std::istringstream read_line(buffer);
			while (read_line >> word)
			{	
				if (word == argv[2])
					file_out << argv[3];
				else
					file_out << word;
				if (!read_line.eof())
					file_out << " ";
			}
			if (!file_in.eof())
				file_out << "\n";
		}
	}
	else
		std::cout << "Invalid arguments" << std::endl;
	return (0);
}