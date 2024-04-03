/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:45:16 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/04 00:23:01 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <iostream>

template <typename T>
class Array{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array();
		Array(const unsigned int size);
		Array(const Array& other);
		~Array();
		Array& operator=(const Array& other);
		T& operator[](const unsigned int index);
		unsigned int size() const;
};

#endif
