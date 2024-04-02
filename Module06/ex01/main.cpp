/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:59:13 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/03 00:24:53 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

	Data cool = {"42", 42};
	Data *ptr = &cool;
	uintptr_t intptr = reinterpret_cast<uintptr_t>(ptr);
	
	std::cout << "Pointer value as hexa: " << ptr << std::endl;
    std::cout << "Pointer value as uint: " << intptr << std::endl;

	uintptr_t intptr2 = Serializer::serialize(&cool);
	Data *ptr2 = Serializer::deserialize(intptr2);

	std::cout << "Function return value serializer: " << intptr2 << std::endl;
    std::cout << "Function return value deserializer: " << ptr2 << std::endl;

	if (&cool == Serializer::deserialize(intptr2))
		std::cout << "Pointers are equal" << std::endl;
	else
		std::cout << "Pointers are different" << std::endl;
	return 0;
}
