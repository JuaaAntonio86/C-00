/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:55:28 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 18:08:37 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){}

Point::Point(const float x, const float y) : _x(x), _y(y){}

Point::Point(Point const &other) : _x(other.getX()), _y(other.getY()){}

Point::~Point(void){}

Point		&Point::operator=(Point const &rhs)
{
	return (*this);
}

Fixed		Point::getX(void) const
{
	return (this->_x);
}

Fixed		Point::getY(void) const
{
	return (this->_y);
}
