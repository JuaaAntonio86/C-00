/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:44:53 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:19:53 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string	_type;
					WrongAnimal(std::string const &type);
	public:
					WrongAnimal();
					WrongAnimal(WrongAnimal const &other);
					~WrongAnimal();
	WrongAnimal&	operator=(WrongAnimal const &other);
	void			makeSound(void) const;
	std::string		getType(void) const;
};

#endif
