/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:58:25 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/08 19:16:56 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Interfaces.hpp"

class	Ice : public AMateria
{
	private:
			std::string	_type;
	
	public:
			Ice(void);
			Ice(Ice &other);
			~Ice(void);
	Ice&	operator=(Ice &other);
	Ice*	clone(void);

};

#endif
