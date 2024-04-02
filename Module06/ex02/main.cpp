/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:49:31 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 01:10:53 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main(void){
	Base *base;

	for(int i = 0; i < 3; i++){
		base  = generate();
		identify(base);
		identify(*base);
		delete base;
		std::cout << std::endl;
	}
	base = new Base();
	identify(base);
	identify(*base);
	delete base;

	return 0;
}
