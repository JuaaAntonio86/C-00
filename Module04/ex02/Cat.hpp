/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:35:29 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 00:09:37 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain*		_brain;
	protected:
					Cat(std::string const &type);
	public:
					Cat();
					Cat(Cat const &other);
					~Cat();
	Cat&			operator=(Cat const &other);
	void			makeSound(void) const;
};

#endif
