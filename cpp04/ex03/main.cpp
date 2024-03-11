/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpedroso <mpedroso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:45:23 by mpedroso          #+#    #+#             */
/*   Updated: 2024/03/11 21:10:49 by mpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		AMateria *tmp;
		AMateria *tmp2;
		IMateriaSource *isrc = new MateriaSource();

		isrc->learnMateria(new Ice());
		isrc->learnMateria(new Cure());

		tmp = isrc->createMateria("ice");
		tmp2 = isrc->createMateria("cure");

		Character *boneco = new Character("boneco");

		boneco->equip(tmp);
		boneco->equip(tmp2);

		Character dumb = *boneco;

		boneco->use(0, dumb);
		boneco->use(1, dumb);
		boneco->use(2, dumb);
		boneco->use(3, dumb);
		boneco->unequip(0);
		boneco->unequip(1);
		boneco->use(0, dumb);
		boneco->use(1, dumb);
		dumb.use(0, *boneco);
		dumb.use(1, *boneco);
		dumb.equip(new Ice());
		dumb.equip(new Cure());
		dumb.use(2, *boneco);
		dumb.use(3, *boneco);
		dumb.use(4, *boneco);

		delete boneco;
		delete tmp2;
		delete tmp;
		delete isrc;
	}
	return (0);
}