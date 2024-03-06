/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:55:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/06 19:34:54 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	int	n = 4;
	Animal *animals[n];
	Dog	*dog = new Dog();
	Dog *dog2 = new Dog(*dog);
	Cat *cat = new Cat();
	Cat *cat2 = new Cat(*cat);
	
	animals[0] = dog;
	animals[1] = dog2;
	animals[2] = cat;
	animals[3] = cat2;
	
	//Animal a;
	//Animal a(*animals[0]);
	for (int i = 0; i < n; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}
	return (0);
}