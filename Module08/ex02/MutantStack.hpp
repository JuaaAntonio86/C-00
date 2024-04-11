/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:34:23 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/11 23:35:40 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
							MutantStack(void);
							MutantStack(const MutantStack & other);
							MutantStack &	operator=(const MutantStack & other);
							~MutantStack(void);

		typedef typename	std::stack<T>::container_type container;
		typedef typename 	container::iterator iterator;
		typedef typename 	container::const_iterator const_iterator;

		iterator			begin(void);
		iterator			end(void);
		const_iterator		cbegin(void);
		const_iterator		cend(void);
};

#include "MutantStack.tpp"

#endif
