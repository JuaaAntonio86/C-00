/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:39 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/18 18:11:45 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <map>
#include <fstream>
#include <math.h>
#include <stdbool.h>
#include <string>

#define FALSE 0;
#define TRUE 1;
#define MAX_SVALUE int 1000;
#define MIN_SVALUE int 0;



typedef struct s_date{
	double			value;
	int				year;
	int				month;
	int				day;
	bool			flag;	
	std::string		error;
	} t_date;


class bitCoin{
	private:
												bitCoin();
												bitCoin(const bitCoin& other);
		bitCoin& 								operator=(const bitCoin& other);
		
		std::map<std::string, t_date>			_csv_map;
		std::ifstream 							_csv_db;
		std::ifstream 							_value_db;
		void									parse_csv();
		std::pair<std::string, t_date>	 		check_dates(const std::string& str);
		bool									isValidstr(const std::string& str) const;
		bool									isLeapYear(int year) const;
		int										checkForHyphen(const std::string& str) const;
		std::pair<std::string, t_date>&			check_values(const std::string& value, std::pair<std::string, t_date>&	tmp_pair);
		void									find_closest(std::pair<std::string, t_date>&	tmp_pair) const;
	public:
												~bitCoin();
												bitCoin(const std::string& csv_file);
		
		void									loadFiles(const std::string& argv);
		void									printResult();
};
