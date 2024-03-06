/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:44:53 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 17:18:19 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal{
	protected:
		std::string	_type;
					AAnimal(std::string const &type);
					AAnimal();
					AAnimal(AAnimal const &other);
	public:
	virtual			~AAnimal();
	AAnimal&		operator=(AAnimal const &other);
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif
