/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:01:46 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 20:01:56 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal"){
	std::cout
			<< "<AAnimal Class> has been constructed" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other){
	std::cout
			<< "<AAnimal Class> copy constructor called" << std::endl;
	*this = other;
}

AAnimal::AAnimal( std::string const & type ) : _type(type) {
	std::cout
			<< "AAnimal name constructor called" << std::endl;
}


AAnimal::~AAnimal(){
	std::cout
			<< "<AAnimal Class> has been destroyed" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const &other){
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	AAnimal::makeSound(void) const{
	std::cout
			<< "<AAnimal Class> pripripririprirpripri" << std::endl;
}

std::string	AAnimal::getType(void) const{
	return (this->_type);
}
