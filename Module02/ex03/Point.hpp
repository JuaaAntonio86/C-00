/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:48:01 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 18:08:00 by juan-anm         ###   ########.fr       */
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



#endif