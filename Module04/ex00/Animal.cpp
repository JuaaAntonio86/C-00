/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:01:46 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:36:52 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout
			<< "<Animal Class> has been constructed" << std::endl;
}

Animal::Animal(Animal const &other){
	std::cout
			<< "<Animal Class> copy constructor called" << std::endl;
	*this = other;
}

Animal::Animal( std::string const & type ) : _type(type) {
	std::cout
			<< "Animal name constructor called" << std::endl;
}


Animal::~Animal(){
	std::cout
			<< "<Animal Class> has been destroyed" << std::endl;
}

Animal& Animal::operator=(Animal const &other){
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Animal::makeSound(void) const{
	std::cout
			<< "<Animal Class> pripripririprirpripri" << std::endl;
}

std::string	Animal::getType(void) const{
	return (this->_type);
}
