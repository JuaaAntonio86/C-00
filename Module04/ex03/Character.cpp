/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:23:50 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/10 00:56:45 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interfaces.hpp"

Character::Character(std::string const &name) : _name(name), _count(0){
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->_unequiped[i] = NULL;
}

Character::Character(Character const &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Character::~Character(void){
	std::cout << "Destructor called" << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	if (this->_unequiped[i])
	// 		delete this->_unequiped[i];
}

Character& Character::operator=(Character const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_count = other._count;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
		for (int i = 0; i < 100; i++)
			this->_unequiped[i] = other._unequiped[i];
	}
	return (*this);
}

/* ************************************************************************** */

std::string const & Character::getName() const{
	return (this->_name);
}

void 				Character::equip(AMateria* m){
	int i = 0;

	while(this->_unequiped[i] && i < 100)
		i++;
	this->_unequiped[i] = m;
	if (this->_count < 4)
	{
		int j = 0;
		while (this->_inventory[j])
			j++;
		this->_inventory[j] = this->_unequiped[i];
		this->_count++;
	}
	else
		std::cout << "Inventory is full" << std::endl;
}

void 				Character::unequip(int idx){
	if (idx >= 0 && idx < this->_count)
	{
		this->_inventory[idx] = NULL;
		this->_count--;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < this->_count)
		this->_inventory[idx]->use(target);
}
