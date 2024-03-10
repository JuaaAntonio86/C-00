/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:17:15 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/10 00:51:03 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

MateriaSource::MateriaSource(void){
	this->_Nmateria = 0;
	for (int i = 0; i < 4; i++)
		this->_arr[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other){
	*this = other;
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++)
		if (this->_arr[i])
			delete this->_arr[i];
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &other){
	if (this != &other)
	{
		this->_Nmateria = other._Nmateria;
		for (int i = 0; i < 4; i++)
			this->_arr[i] = other._arr[i];
	}
	return (*this);
}

/* ************************************************************************** */

void	MateriaSource::learnMateria(AMateria* other){
	if (_Nmateria < 4)
	{
		this->_arr[_Nmateria] = other;
		_Nmateria++;
	}
	else
		std::cout << "MateriaSource is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
		if (this->_arr[i] && this->_arr[i]->getType() == type)
			return (this->_arr[i]->clone());
	return (NULL);
}
