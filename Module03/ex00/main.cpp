/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:55:44 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 17:03:27 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Jhonny");
	ClapTrap clap2("Wilfred");

	clap.attack("enemy");
	clap.takeDamage(5);
	clap.attack("Wilfred");
	clap.attack("Willy");
	clap.attack("Wilfred");
	clap2.attack("Jhonny");
	clap2.attack("Jhonny");
	clap.attack("enemy");
	clap.attack("Wilfred");
	clap.attack("enemy");
	clap.attack("hater");
	clap.attack("Papaneitor");
	clap.attack("enemy");
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap2.takeDamage(5);
	clap.takeDamage(5);
	clap2.takeDamage(5);
	
	return 0;
}