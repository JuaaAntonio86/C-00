/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:35:05 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/11 23:36:14 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack & other) : std::stack<T>(other) {}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(const MutantStack<T> & other)
{
	std::stack<T>::operator=(other);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(void) {}
		
template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend(void)
{
	return (this->c.end());
}
