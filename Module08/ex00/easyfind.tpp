/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:45:49 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 00:03:01 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


template<typename T>
void easyfind(const T& container, int integer)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), integer);
	if (it == container.end())
		throw std::invalid_argument("Integer not found in the Container");
}

template<typename K, typename V>
void easyfind(const std::map<K, V>& container, int integer)
{
	for(typename std::map<K, V>::const_iterator it = container.begin(); it != container.end(); ++it) 
	{
		if (it->second == integer)
			return ;
	}
	throw std::invalid_argument("Integer not found in the Container");
}
