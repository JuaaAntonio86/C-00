/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:17:15 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/08 19:19:53 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

MateriaSource::MateriaSource(void){}

MateriaSource::MateriaSource(MateriaSource const &other){}

MateriaSource::~MateriaSource(void){}

MateriaSource&	MateriaSource::operator=(MateriaSource const &other){}

/* ************************************************************************** */

void	MateriaSource::learnMateria(AMateria* other){}

AMateria*	MateriaSource::createMateria(std::string const & type){}
