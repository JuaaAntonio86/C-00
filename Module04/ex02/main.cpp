/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:30:40 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:44:09 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat lo;
	Cat li;
	lo = li;
	std::cout << j->getType() << " Class is printed " << std::endl;
	std::cout << i->getType() << " Class is printed " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl << std::endl;
	
	const WrongAnimal* mt = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	const WrongCat* sh =  new WrongCat();
	std::cout << x->getType() << " Class is printed " << std::endl;
	x->makeSound(); //will output the Animal sound!
	mt->makeSound();
	sh->makeSound();
	delete mt;
	delete x;
	delete sh;
	
	return 0;
}
