/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:58:12 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/11 00:08:59 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

AMateria::AMateria(void) : _type("default"){
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & other){
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria::AMateria(std::string const & type) : _type(type){
	// std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(void){
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & other){
	// std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/* ************************************************************************** */

std::string const&	AMateria::getType(void) const{
	return(this->_type);
}

void	AMateria::use(ICharacter& target){
	std::cout << "* uses some materia on " << target.getName() << " *" << std::endl;
}

AMateria* AMateria::clone() const{
	return (AMateria*)this;
}
