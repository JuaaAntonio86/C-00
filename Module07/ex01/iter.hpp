/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:32:38 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 19:45:30 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void   iter(T *array, unsigned int len, void (*f)(T &))
{
	if (array)
	{
		for (unsigned int i = 0; i < len; i++)
			f(array[i]);
	}
}
template <typename T>
void  print(T &i)
{
	std::cout << i << std::endl;
}

#endif
