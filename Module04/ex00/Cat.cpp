/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:54 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:43:05 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout
			<< "<Cat Class> has been constructed" << std::endl;
}

Cat::Cat(Cat const &other){
	std::cout
			<< "<Cat Class> copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat(){
	std::cout
			<< "<Cat Class> has been destroyed" << std::endl;
}

Cat& Cat::operator=(Cat const &other){
	std::cout
		<< "<Cat Class> Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Cat::makeSound(void) const{
	std::cout
			<< "<Cat Class> Miaaauuuuu Mmmmiaaaauuuuu" << std::endl;
}
