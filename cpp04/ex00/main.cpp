/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:55:41 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/05 13:04:11 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *p = new WrongCat();
	const WrongCat *f = new WrongCat();
	std::cout << p->getType() << " " << std::endl;
	p->makeSound();
	meta2->makeSound();
	f->makeSound();
	delete meta;
	delete i;
	delete j;
	delete meta2;
	delete p;
	delete f;
	return (0);
}