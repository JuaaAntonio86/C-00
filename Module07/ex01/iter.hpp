/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:32:38 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 23:42:14 by juan-anm         ###   ########.fr       */
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

template<typename T>
void  increment(T &i)
{
	if (i)
		i++;
}

template<>
void increment(std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i])
			increment(str[i]);
    }
}

#endif
