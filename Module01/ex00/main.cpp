/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:16:17 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/19 17:46:48 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
	Zombie zombi("Rick");
	zombi.announce();
	
	Zombie *zombi2 = zombi.newZombie("Daryl");
	zombi2->announce();
	delete zombi2;
	
	Zombie::randomChump("Carl");
	
	return (0);
}