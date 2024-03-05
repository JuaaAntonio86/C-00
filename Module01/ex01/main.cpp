/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:01:45 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 00:22:01 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	zombies = Zombie::zombieHorde(45, "Zombie");
	for (int i = 0; i < 45; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}