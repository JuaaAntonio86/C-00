/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:37:50 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 00:12:15 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout
			<< "Brain standard constructor called" << std::endl;
}

Brain::Brain(Brain const &other){
	std::cout
			<< "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain(void){
	std::cout
			<< "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const &other){
	std::cout
			<< "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < IDEAS; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}
