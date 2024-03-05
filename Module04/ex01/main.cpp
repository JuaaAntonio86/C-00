/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:30:40 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 00:40:51 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{

	Animal *Farm[8];
	int i = 0;

	while (i < 4)
		Farm[i++] = new Cat();
	while (i < 8)
		Farm[i++] = new Dog();
	for (i = 0; i < 8; i++)
	{
		Farm[i]->makeSound();
		std::cout << " Hello I'm a " << Farm[i]->getType() << std::endl;
	}
	for(i = 7; i >= 0; i--)
		delete Farm[i];

	Animal *A = new Cat();
	Animal *B = A;
	B->makeSound();
	delete A;

	return 0;
}
