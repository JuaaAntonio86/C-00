/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:04:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 18:05:49 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void )
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		std::cout << b << std::endl;
		
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		// Testing constructors
		Fixed a;
		Fixed b(10);
		Fixed c(42.42f);
		Fixed d(b);

		// Testing arithmetic operators
		Fixed sum = b + c;
		Fixed difference = b - c;
		Fixed product = b * c;
		Fixed quotient = b / c;

		// Testing comparison operators
		bool greater = b > c;
		bool lesser = b < c;
		bool greater_equal = b >= c;
		bool lesser_equal = b <= c;
		bool equal = b == c;
		bool not_equal = b != c;

		// Testing increment/decrement operators
		Fixed e = b++;
		Fixed f = ++c;
		Fixed g = b--;
		Fixed h = --c;

		// Testing min/max functions
		Fixed min_value = Fixed::min(a, b);
		Fixed max_value = Fixed::max(c, d);

		// Testing conversion functions
		float floatValue = b.toFloat();
		int intValue = c.toInt();

		// Testing output operator
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl;

		std::cout << "Sum: " << sum << std::endl;
		std::cout << "Difference: " << difference << std::endl;
		std::cout << "Product: " << product << std::endl;
		std::cout << "Quotient: " << quotient << std::endl;

		std::cout << "b > c: " << greater << std::endl;
		std::cout << "b < c: " << lesser << std::endl;
		std::cout << "b >= c: " << greater_equal << std::endl;
		std::cout << "b <= c: " << lesser_equal << std::endl;
		std::cout << "b == c: " << equal << std::endl;
		std::cout << "b != c: " << not_equal << std::endl;

		std::cout << "e: " << e << std::endl;
		std::cout << "f: " << f << std::endl;
		std::cout << "g: " << g << std::endl;
		std::cout << "h: " << h << std::endl;

		std::cout << "Min value: " << min_value << std::endl;
		std::cout << "Max value: " << max_value << std::endl;

		std::cout << "b as float: " << floatValue << std::endl;
		std::cout << "c as int: " << intValue << std::endl;
    }
	return 0;
}