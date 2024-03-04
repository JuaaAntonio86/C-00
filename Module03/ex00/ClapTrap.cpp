/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:55:50 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 18:32:30 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << this->_name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other){
	*this = other;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap " << this->_name << " destructed" << std::endl;
}

ClapTrap&		ClapTrap::operator=(ClapTrap const &rhs){
	if (this == &rhs) // Check for self-assignment
        return *this; 
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "ClapTrap copy assignation operator called" << std::endl;
	return (*this);
}

void			ClapTrap::attack(std::string const &target){
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << 
				", causing " <<	this->_attackDamage << " points of damage!" << 
				std::endl;
	this->_energyPoints -= 1;
}

void			ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitpoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	if (amount == 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes no damage" << std::endl;
		return ;
	}
	if (amount >= this->_hitpoints)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << 
					" points of damage and dies" << std::endl;
		this->_hitpoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << 
				" points of damage!" << std::endl;
	this->_hitpoints -= amount;
}

void			ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	if (this->_hitpoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has repaired " << amount << 
				" points of damage!" << std::endl;
	this->_hitpoints += amount;
	this->_energyPoints -= 1;
}
