/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:01:46 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:35:11 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout
			<< "<WrongAnimal Class> has been constructed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other){
	std::cout
			<< "<WrongAnimal Class> copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::WrongAnimal( std::string const & type ) : _type(type) {
	std::cout
			<< "<WrongAnimal Class> name constructor called" << std::endl;
}


WrongAnimal::~WrongAnimal(){
	std::cout
			<< "<WrongAnimal Class> has been destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other){
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const{
	std::cout
			<< "<WrongAnimal Class> pripripririprirpripri" << std::endl;
}

std::string	WrongAnimal::getType(void) const{
	return (this->_type);
}
