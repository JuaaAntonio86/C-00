/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:01:25 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/08 23:58:27 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Interfaces.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int			_Nmateria;
		AMateria* 	_arr[4];
	
	public:
					MateriaSource(void);
					MateriaSource(MateriaSource const &other);
					~MateriaSource(void);
	MateriaSource&	operator=(MateriaSource const &other);

			void	learnMateria(AMateria* other);
		AMateria*	createMateria(std::string const & type);
};

#endif
