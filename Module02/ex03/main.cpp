/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:04:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/28 23:42:44 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void )
{
    // Test cases
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 3);

    Point inside(1, 1);  // Inside the triangle
    Point outside(2, 2); // Outside the triangle
    Point outside2(4, 4); // Outside the triangle
	Point outside3(0, 4); // Outside the triangle
	Point onEdge(2, 1.5); // On the edge of the triangle
	Point onEdge2(4, 0); // On the edge of the triangle
	
    std::cout << "Point (1, 1) inside triangle: " << std::boolalpha << bsp(a, b, c, inside) << std::endl;
    std::cout << "Point (2, 2) outside triangle: " << std::boolalpha << bsp(a, b, c, outside) << std::endl;
    std::cout << "Point (4, 4) outside triangle: " << std::boolalpha << bsp(a, b, c, outside2) << std::endl;
	std::cout << "Point (0, 4) outside triangle: " << std::boolalpha << bsp(a, b, c, outside3) << std::endl;
	std::cout << "Point (2, 1.5) edge triangle: " << std::boolalpha << bsp(a, b, c, onEdge) << std::endl;
    std::cout << "Point (4, 0) edge triangle: " << std::boolalpha << bsp(a, b, c, onEdge2) << std::endl;

    return 0;
}
