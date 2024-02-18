/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:14:26 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/18 23:27:46 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
