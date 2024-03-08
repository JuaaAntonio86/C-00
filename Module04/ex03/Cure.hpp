/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:58:20 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/08 19:16:59 by juan-anm         ###   ########.fr       */
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
			Cure(Cure &other);
			~Cure(void);
	Cure&	operator=(Cure &other);
	Cure*	clone(void);

};

#endif
