/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:45:56 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/10 00:00:26 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <iterator>
#include <deque>
#include <map>
#include <string>
#include <strstream>

template<typename T>
void easyfind(const T& container, int integer);

template<typename K, typename V>
void easyfind(const std::map<K, V>& container, int integer);

#endif
