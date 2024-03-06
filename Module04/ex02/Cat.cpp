/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:54 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 20:10:26 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal("Cat"){
	std::cout
			<< "<Cat Class> has been constructed" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &other){
	std::cout
			<< "<Cat Class> copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat(){
	std::cout
			<< "<Cat Class> has been destroyed" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const &other){
	std::cout
		<< "<Cat Class> Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		*(this->_brain) = *(other._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const{
	std::cout
			<< "<Cat Class> Miaaauuuuu Mmmmiaaaauuuuu" << std::endl;
}
