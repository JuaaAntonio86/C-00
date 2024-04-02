/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:59:19 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 00:21:33 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

struct Data
{
	std::string s1;
	int n;
};

class Serializer
{
	private:
							Serializer(void);
							Serializer(Serializer const &other);
							Serializer& operator=(Serializer const &other);
							~Serializer(void);
	public:
		static uintptr_t 	serialize(Data *ptr);
		static Data* 		deserialize(uintptr_t raw);
};

#endif
