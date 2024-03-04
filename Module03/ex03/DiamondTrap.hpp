/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:22:09 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 23:48:50 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string 	_name;
						DiamondTrap(void);

	public:
						DiamondTrap(DiamondTrap const &src);
						DiamondTrap(std::string name);
						~DiamondTrap(void);
		DiamondTrap&	operator=(DiamondTrap const &rhs);
				using	ScavTrap::attack;
				void	whoAmI(void);
};

#endif
