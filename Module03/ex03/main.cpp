/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:55:44 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 23:54:47 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main( void )
{
    DiamondTrap clap("Jhonny");

	clap.FragTrap::attack("enemy");
	clap.whoAmI();
	DiamondTrap clipi = clap;
	clap.highFivesGuys();
	clap.attack("enemy");
	clap.takeDamage(5);
	clap.attack("enemy");
	clap.attack("Willy");
	clap.attack("enemy");
	clap.attack("Wilfred");
	clap.attack("enemy");
	clap.ScavTrap::guardGate();
	clap.highFivesGuys();
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.takeDamage(5);
	clap.takeDamage(5);

    return 0;
}
