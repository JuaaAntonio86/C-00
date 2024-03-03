/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:29:17 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 00:29:38 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints  = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout 
		<< "ScavTrap " << this->_name << " has been created" 
		<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout 
		<< "ScavTrap " << this->_name << " has been destroyed" 
		<< std::endl;
}
void	ScavTrap::guardGate(void)
{
	std::cout
		<< "ScavTrap " << this->_name << " is in Gate Keeper Mode"
		<< std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
		if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << 
				", causing " <<	this->_attackDamage << " points of damage!" << 
				std::endl;
	this->_energyPoints -= 1;
}
