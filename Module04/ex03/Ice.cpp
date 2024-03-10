/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:58:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/10 00:50:54 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

Ice::Ice(void) : AMateria("ice"){
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &other) :  AMateria("ice"){
	std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}


Ice &	Ice::operator=(Ice const &other){
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Ice::~Ice(void){
	std::cout << "Ice destructor called" << std::endl;
}

/* ************************************************************************** */

AMateria*	Ice::clone(void) const{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
