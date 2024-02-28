/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:55:44 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/29 00:52:56 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Jhonny");

	clap.attack("enemy");
	clap.takeDamage(5);
	clap.attack("enemy");
	clap.attack("enemy");
	clap.attack("Willy");
	clap.attack("enemy");
	clap.attack("Wilfred");
	clap.attack("enemy");
	clap.attack("hater");
	clap.attack("enemy");
	clap.attack("enemy");
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);   
    

    return 0;
}