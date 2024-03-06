/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:31:16 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 12:33:15 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat &cpy);
		Cat& operator=(const Cat &cpy);
		~Cat(void);
		void makeSound(void) const;
};