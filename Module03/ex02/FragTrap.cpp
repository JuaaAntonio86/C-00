/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:29:17 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 19:08:05 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hitpoints  = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout 
		<< "FragTrap " << this->_name << " has been created" 
		<< std::endl;
}

FragTrap::~FragTrap(){
	std::cout 
		<< "FragTrap " << this->_name << " has been destroyed" 
		<< std::endl;
}

FragTrap&		FragTrap::operator=(FragTrap const &rhs){
	if (this == &rhs)
        return *this;
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "FragTrap assignation operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void){
	if (this->_hitpoints <= 0)
	{
		std::cout
			<< "FragTrap " << this->_name << " is dead and cannot give high fives to any one!"
			<< std::endl;
		return ;
	}
	std::cout
		<< "FragTrap " << this->_name << " is positive and requests high fives to everyone!"
		<< std::endl;
}
