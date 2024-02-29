/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:04:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/29 19:51:38 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	private:
				ScavTrap();

	public:
				ScavTrap(std::string name);
				~ScavTrap();
		void	guardGate();
};

std::ostream& operator<<(std::ostream &out, ScavTrap const &value);

#endif