/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:28:15 by juan-anm          #+#    #+#             */
/*   Updated: 2024/03/06 00:11:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#define IDEAS 100

#include <iostream>

class Brain{
	private:
			std::string _ideas[IDEAS];
	public:
					Brain(void);
					Brain(Brain const &other);
					~Brain(void);
			Brain&	operator=(Brain const &other);
};

#endif
