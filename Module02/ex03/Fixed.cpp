/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:54 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 23:22:04 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fpvalue) : _value(fpvalue << _bits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float ffpvalue) : _value(std::round(ffpvalue * (1 << _bits))) 
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void){
	//std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
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

/* ***********************COMPARISON OPERATORS***************************** */

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

/* ***********************ARITHMETIC OPERATORS***************************** */

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

/* ***********************INCREMENT/DECREMENT OPERATORS********************* */

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}

/* ***********************MIN/MAX FUNCTION********************************** */

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}
Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}
