/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:09:18 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 23:48:00 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

static Fixed absolute(Fixed value)
{
	if (value < 0)
		return (value * -1);
	return (value);
}

static Fixed area( Point const a, Point const b, Point const c)
{
	return ( ( ( a.getX() * ( b.getY() - c.getY() ) ) +
			( b.getX() * ( c.getY() - a.getY() ) ) +
			( c.getX() * ( a.getY() - b.getY() ) ) ) / 2 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea = area(a, b, c);
	Fixed area1 = absolute(area(point, a, b));
	Fixed area2 = absolute(area(point, b, c));
	Fixed area3 = absolute(area(point, c, a));

	// Define a tolerance value for comparisons
	const Fixed tolerance(0.0001f); // Adjust according to your precision requirements

	// Check if the point lies on one of the edges
	if (area1 <= tolerance || area2 <= tolerance || area3 <= tolerance)
	{	
		return false; // Point lies on one of the edges
	}
	// Check if the point lies strictly inside the triangle
	if ((area1 + area2 + area3) - totalArea <= tolerance)
	{	
		return true; // Point is strictly inside the triangle
	}

	return false; // Point lies outside the triangle
}