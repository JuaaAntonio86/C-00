/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 23:55:47 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/29 20:13:15 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

	private:
						ClapTrap(void);
	public:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
						ClapTrap(std::string name);
						~ClapTrap(void);
						ClapTrap(ClapTrap const &other);
		
		ClapTrap		&operator=(ClapTrap const &rhs);
		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream &out, ClapTrap const &value);

#endif