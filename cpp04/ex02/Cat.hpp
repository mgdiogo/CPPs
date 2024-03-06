/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:31:16 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 19:25:45 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat &cpy);
		Cat& operator=(const Cat &cpy);
		~Cat(void);
		void makeSound(void) const;
};