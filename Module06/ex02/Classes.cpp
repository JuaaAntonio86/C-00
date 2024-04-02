/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:29:12 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 01:08:21 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base *generate(void){

	std::srand(std::time(NULL));
	unsigned int random = std::rand() % 3;
	usleep(1000000);
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p){

	if (dynamic_cast<A*>(p))
		std::cout << "Class A Object" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B Object" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C Object" << std::endl;
	else
		std::cout << "Unknown Object" << std::endl;
}

void identify(Base& p){
	
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Class A Object" << std::endl;
	}
	catch (std::bad_cast &bc) {
	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Class B Object" << std::endl;
	}
	catch (std::bad_cast &bc) {
	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Class C Object" << std::endl;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Unknown Object" << std::endl;
	}
	}
	}
}
