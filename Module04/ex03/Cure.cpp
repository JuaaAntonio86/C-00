/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:58:17 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/09 00:51:01 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

Cure::Cure(void) : AMateria("cure"){
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria("cure"){
	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure::~Cure(void){
	std::cout << "Cure destructor called" << std::endl;
}

Cure&	Cure::operator=(Cure const &other){
	std::cout << "Cure assignation operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
		
AMateria*	Cure::clone(void) const{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
