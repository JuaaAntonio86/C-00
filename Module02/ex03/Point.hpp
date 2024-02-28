/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:48:01 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 23:20:38 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;

public:
				Point(void);
				Point(const float x, const float y);
				Point(Point const &other);
				~Point(void);
	Point		&operator=(Point const &rhs);
	Fixed		getX(void) const;
	Fixed		getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif