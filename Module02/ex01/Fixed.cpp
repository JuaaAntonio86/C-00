/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:54 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/27 10:56:20 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fpvalue) : _value(fpvalue << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float ffpvalue) : _value(std::round(ffpvalue * (1 << _bits))) 
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << _bits);
}

int	Fixed::toInt(void) const
{
	return this->_value >> _bits;
}

std::ostream& operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}
