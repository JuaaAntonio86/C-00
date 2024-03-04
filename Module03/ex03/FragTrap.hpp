/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:04:22 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/04 23:50:43 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap
{
	protected:
				FragTrap();
	public:
				FragTrap(std::string name);
				~FragTrap();
	FragTrap&	operator=(FragTrap const &rhs);
		void	highFivesGuys();
};

#endif
