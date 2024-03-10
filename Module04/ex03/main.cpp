/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:57:36 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/11 00:44:00 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		AMateria* tmp;
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}
	std::cout
		<< std::endl 
		<< "*-----------MY TESTS---------*"	<< std::endl 
		<< std::endl;
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());

		ICharacter* me = new Character("me");
		AMateria* tmp = NULL;
		src->learnMateria(tmp);
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->equip(tmp);
		me->unequip(0);
		me->unequip(1);
		me->unequip(2);
		me->unequip(3);
		me->unequip(3);
		me->unequip(4);
		me->unequip(5);
		me->unequip(6);
		me->equip(tmp);
		tmp = src->createMateria("icaro");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		
		std::cout<< std::endl ;

		me->use(0, *me);
		me->use(1, *me);
		me->use(2, *me);
		me->use(3, *me);
		me->use(4, *me);

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);	
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->unequip(0);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		std::cout<< std::endl ;
		
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		
		delete bob;
		delete me;
		delete src;
	}	
	return 0;
}
