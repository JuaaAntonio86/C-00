/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:35:29 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/05 18:21:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	protected:
					WrongCat(std::string const &type);
	public:
					WrongCat();
					WrongCat(WrongCat const &other);
					~WrongCat();
	WrongCat&		operator=(WrongCat const &other);
	void			makeSound(void) const;
};

#endif
