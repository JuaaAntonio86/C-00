/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:29:17 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 00:38:06 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints  = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout 
		<< "FragTrap " << this->_name << " has been created" 
		<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout 
		<< "FragTrap " << this->_name << " has been destroyed" 
		<< std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout
		<< "FragTrap " << this->_name << " is positive and gives high fives to everyone!"
		<< std::endl;
}

void	FragTrap::attack(std::string const &target)
{
		if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << 
				", causing " <<	this->_attackDamage << " points of damage!" << 
				std::endl;
	this->_energyPoints -= 1;
}
