/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:45:21 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/04 18:38:04 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0){}

template <typename T>
Array<T>::Array(const unsigned int size)
{
	_size = size;
	_array = new T[size];
	if (_array == NULL)
		throw std::runtime_error("Memory allocation failed.");
}

template <typename T>
Array<T>::Array(const Array &other)
{
	this->_array = new T[other._size];
	if (this->_array == NULL)
		throw std::runtime_error("Memory allocation failed.");
	this->_size = other._size;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	if (_array != NULL)
		delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;
	if (_array != NULL)
		delete[] _array;
	this->_array = new T[other._size];
	if (this->_array == NULL)
		throw std::runtime_error("Memory allocation failed.");
	this->_size = other._size;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](const unsigned int index) const
{
	if (this->_array == NULL)
		throw std::out_of_range("Array is empty.");
	if (this->_size == 0)
		throw std::out_of_range("Array is empty.");
	if (index >= _size || index < 0)
		throw std::out_of_range("Index out of range.");
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _size;
}

