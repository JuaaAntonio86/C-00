/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:39 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/15 19:34:17 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <map>
#include <fstream>
#include <math.h>

// typedef struct s_date{
// 	std::string		db_line;
// 	int				year;
// 	int				month;
// 	int				day;
// 	bool			error;
// } t_date;


class bitCoin{
	private:
												bitCoin();
												bitCoin(const bitCoin& other);
		bitCoin& 								operator=(const bitCoin& other);
		std::map<std::string, double>					_csv_map;
		std::ifstream 							_csv_db;
		std::ifstream 							_value_db;
	public:
												~bitCoin();
												bitCoin(const std::string& csv_file);
		
		void									loadFiles(const std::string& argv);
		void									parse_csv();
		void									printResult();
};

	//public:
		//infile getters
		//map csv database parser to map
		//map value database parser to pair
		//check dates(years, months and days are valid)
		//...........etc...........

