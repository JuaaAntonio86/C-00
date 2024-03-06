/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:56 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 20:08:37 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal("Dog"){
	std::cout
			<< "<Dog Class> has been constructed" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &other){
	std::cout
			<< "<Dog Class> copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog(){
	std::cout
			<< "<Dog Class> has been destroyed" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(Dog const &other){
	std::cout
		<< "<Dog Class> Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		*(this->_brain) = *(other._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout
			<< "<Dog Class> Woufff Woufff Grgrgrrrrrr" << std::endl;
}
