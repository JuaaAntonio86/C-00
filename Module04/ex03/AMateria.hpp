/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:51:33 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/08 19:10:02 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Interfaces.hpp"

class AMateria
{
	protected:
						std::string _type;
						AMateria(void);
						AMateria(AMateria const & other);

	public:
						AMateria(std::string const & type);
	virtual				~AMateria(void);
	AMateria &			operator=(AMateria const & other);	

	std::string const&	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
