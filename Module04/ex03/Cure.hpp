/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:58:20 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/09 00:50:22 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Interfaces.hpp"

class	Cure : public AMateria
{
	private:
			std::string	_type;
	
	public:
						Cure(void);
						Cure(Cure const &other);
						~Cure(void);
				Cure&	operator=(Cure const &other);
		
	virtual AMateria*	clone(void) const;
		virtual	void	use(ICharacter& target);
};

#endif
