/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:55:44 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 19:11:58 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


int main( void )
{
    FragTrap clap("Jhonny");

	clap.attack("enemy");
	clap.takeDamage(5);
	clap.attack("enemy");
	clap.attack("enemy");
	clap.attack("Willy");
	clap.attack("enemy");
	clap.attack("Wilfred");
	clap.attack("enemy");
	FragTrap clap2(clap);
	clap2 = clap;
	clap.highFivesGuys();
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.takeDamage(5);
	clap.takeDamage(5);   
    

    return 0;
}