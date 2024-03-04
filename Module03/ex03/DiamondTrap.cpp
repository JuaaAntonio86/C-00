/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:17:58 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 23:49:39 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	FragTrap::_hitpoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	
	std::cout 
		<< "DiamondTrap " << _name << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout 
		<< "DiamondTrap " << _name << " has been destroyed" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	ClapTrap::_name = rhs._name + "_clap_name";
	FragTrap::_hitpoints = rhs._hitpoints;
	ScavTrap::_energyPoints = rhs._energyPoints;
	FragTrap::_attackDamage = rhs._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout 
		<< "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
