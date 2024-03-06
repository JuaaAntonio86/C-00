/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm <juan-anm@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:36:16 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 20:04:00 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain*		_brain;
	protected:
					Dog(std::string const &type);
	public:
					Dog();
					Dog(Dog const &other);
					~Dog();
	Dog&			operator=(Dog const &other);
	void			makeSound(void) const;
};

#endif
