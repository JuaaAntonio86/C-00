/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:30:40 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 20:11:31 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	AAnimal::makeSound;
	AAnimal *Farm[8];
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

	AAnimal *A = new Cat();
	AAnimal *B = A;
	B->makeSound();
	delete A;
	return 0;
}
