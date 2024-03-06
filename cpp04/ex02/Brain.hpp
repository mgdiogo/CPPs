/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:55:22 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 18:08:18 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	private:
	public:
		Brain(void);
		Brain(const Brain &cpy);
		Brain& operator=(const Brain &cpy);
		~Brain(void);
		std::string ideas[100];
};