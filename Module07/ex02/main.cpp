/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:45:05 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/04 18:40:54 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
		{
			Array<int> numbers(MAX_VAL);
			int* mirror = new int[MAX_VAL];
			srand(time(NULL));
			for (int i = 0; i < MAX_VAL; i++)
			{
				const int value = rand();
				numbers[i] = value;
				mirror[i] = value;
			}
			//SCOPE
			{
				Array<int> tmp = numbers;
				Array<int> test(tmp);
			}

			for (int i = 0; i < MAX_VAL; i++)
			{
				if (mirror[i] != numbers[i])
				{
					std::cerr << "didn't save the same value!!" << std::endl;
					return 1;
				}
			}
			try
			{
				numbers[-2] = 0;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			try
			{
				numbers[MAX_VAL] = 0;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}

			for (int i = 0; i < MAX_VAL; i++)
			{
				numbers[i] = rand();
			}
			delete [] mirror;//
		}
/******************************/
		{
			std::srand(std::time(NULL));
			unsigned int	size = std::rand() % 100;

			Array<int>	numbers1(size);
			for (unsigned int i = 0; i < numbers1.size(); i++)
				numbers1[i] = std::rand();
			std::cout << "ARRAY OF SIZE " << size << "[0, " << (size - 1) << "]" << std::endl;
			std::cout << "-----------------------------" << std::endl;
			for (unsigned int i = 0; i < 10; i++)
			{
				unsigned int index = std::rand() % 100;
				try
				{
					int tmp = numbers1[index];
					std::cout << "number[" << index << "] = " << tmp << std::endl;
				}
				catch(const std::exception& e)
				{
					std::cout << "number[" << index << "] = " << e.what() << std::endl;
				}
			}

			std::cout << std::endl << std::endl;
			
			Array<std::string>	words(5);

			words[0] = "Bambas";
			words[1] = "Nike";
			words[2] = "adidas";
			words[3] = "Puma";
			words[4] = "Reebok";

			Array<std::string>	words2 = words;

			words2[0] = "Car";
			words2[1] = "porsche";
			words2[2] = "Ferrari";
			words2[3] = "Lamborghini";
			words2[4] = "Aston Martin";

			for (int i = -1; i < static_cast<int>(words.size() + 4 ); i++)
			{
				try
				{
					std::cout << "word[" << i << "] = " << words[i] << " - > ";
					std::cout << "word2[" << i << "] = " << words2[i] << std::endl;
				}
				catch(const std::exception& e)
				{
					std::cout << "word[" << i << "] = " << e.what() << " - > ";
					std::cout << "word2[" << i << "] = " << e.what() << std::endl;
				}
			}
		}
    return 0;
}
