/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:41 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/15 17:39:55 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		try{
				bitCoin broker("data.csv");

				broker.loadFiles(argv[1]);
				broker.printResult();
				//check infiles
				//parse and isert csv database into map
					//check correct format of file line x line
				//parse and insert file prices/dates database
					//check correct format of file line x line
				//once everything is parsed calculate multiplication of echange rate in specified date
					//if date doesnt exist go to date before the one specified
				//...........etc............
		}
		catch(const std::exception & e){
			std::cerr << e.what() << std::endl;
		}

	}
	else
	{
		std::cerr << "Wrong Arguments:" << std::endl
		<< "Usage: ./btc [File_name.txt]" << std::endl;
		return 1;
	}
	return 0;

}
