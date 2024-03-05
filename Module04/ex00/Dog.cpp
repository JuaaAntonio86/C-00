/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:56 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:03:50 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout
			<< "<Dog Class> has been constructed" << std::endl;
}

Dog::Dog(Dog const &other){
	std::cout
			<< "<Dog Class> copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog(){
	std::cout
			<< "<Dog Class> has been destroyed" << std::endl;
}

Dog& Dog::operator=(Dog const &other){
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout
			<< "<Dog Class> Woufff Woufff Grgrgrrrrrr" << std::endl;
}
