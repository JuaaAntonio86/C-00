/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:54 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:20:45 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout
			<< "<WrongCat Class> has been constructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other){
	std::cout
			<< "<WrongCat Class> copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat(){
	std::cout
			<< "<WrongCat Class> has been destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &other){
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	WrongCat::makeSound(void) const{
	std::cout
			<< "<WrongCat Class> Miaaauuuuu Mmmmiaaaauuuuu" << std::endl;
}
