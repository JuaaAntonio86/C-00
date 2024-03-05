/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:44:53 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 00:53:35 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string	_type;
					Animal(std::string const &type);
					Animal();
					Animal(Animal const &other);
	public:
	virtual			~Animal();
	Animal&			operator=(Animal const &other);
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;
};

#endif
