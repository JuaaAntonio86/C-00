/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:36 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/16 19:13:46 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bitCoin::bitCoin(const std::string& csv_file)
{
	_csv_db.open(csv_file, std::ifstream::in);
	if (!_csv_db.is_open())

		throw std::invalid_argument("Invalid file name: please crate a valid csv file in the root of this directory");
}

bitCoin::~bitCoin(){_csv_map.clear();}

void	bitCoin::loadFiles(const std::string& argv){
	_value_db.open(argv, std::ifstream::in);
	if (!_value_db.is_open())
		throw std::invalid_argument("Invalid file name: please pass as argument a valid .txt file which is in the root of this directory");
}

void bitCoin::parse_csv(){
	std::string						line;
	int								pos;
	std::pair<std::string, t_date>	tmp_pair;
	
	std::getline(_csv_db, line);
	if( line.compare("date,exchange_rate"))
		throw std::invalid_argument("Invalid file name: please crate a valid csv file in the root of this directory");
	while(std::getline(_csv_db, line))
	{
		if(!(pos = line.find(',')) || line.empty())
			throw std::invalid_argument("Invalid csv file format");
		tmp_pair = check_dates(line.substr(0 , pos));
		tmp_pair = check_values(line.c_str() + (pos + 1), tmp_pair);
		_csv_map.insert(tmp_pair);
	}

}

std::pair<std::string, t_date>	bitCoin::check_dates(const std::string& str){
	std::pair<std::string, t_date>	tmp_pair;
	int								calendar[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	std::string						temp;
	
	tmp_pair.second.flag = FALSE;
	if (str.length() != 10 || isValidstr(str))
		{
			tmp_pair.second.error = "Error: bad input =>" + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
		}
	if (str[4] != '-' || str[7] != '-' || checkForHyphen(str) != 2)
		{
			tmp_pair.second.error = "Error: bad input =>" + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
		}
	temp = str.substr(0, 4);
	tmp_pair.second.year = atoi(temp.c_str());
	temp = str.substr(5, 2);
	tmp_pair.second.month = atoi(temp.c_str());
	temp = str.substr(8, 2);
	tmp_pair.second.day = atoi(temp.c_str());
	if ((tmp_pair.second.year < 2009 || tmp_pair.second.year > 2024) || (tmp_pair.second.month < 1 
	|| tmp_pair.second.month > 12) || (tmp_pair.second.day < 1 || tmp_pair.second.day > calendar[tmp_pair.second.month]))
		{
			tmp_pair.second.error = "Error: bad input =>" + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
		}
	if(!isLeapYear(tmp_pair.second.year) && tmp_pair.second.month == 2 && tmp_pair.second.day > 28)
		{
			tmp_pair.second.error = "Error: bad input =>" + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd leap");
		}
	tmp_pair.first = str;
	return(tmp_pair);
}

bool bitCoin::isValidstr(const std::string& str) const{
	std::string needle = "-0123456789";
	int i = 0;
	int j;
	
	while(str[i])
	{
		j = 0;
		while(needle[j])
		{
			if (str[i] == needle[j])
				break;
		j++;
		}
		if (j == 11)
			return (true);
	i++;
	}
	return (false);
}

bool bitCoin::isLeapYear(int year) const{
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

int	bitCoin::checkForHyphen(const std::string& str) const{
	int i = 0;
	int hyphen = 0;
	while (str[i])
	{
		if (str[i] == '-')
			hyphen++;
		i++;
	}
	return hyphen;
}

void	bitCoin::printResult() {
	parse_csv();
	
	int pos = 0;
	std::string line;
	std::pair<std::string, t_date>	tmp_pair;
	std::map<std::string, t_date>::iterator it;

	std::getline(_value_db, line);
	if( line.compare("date | value"))
		throw std::invalid_argument("AInvalid file name: please crate a valid csv file in the root of this directory");
	while(std::getline(_value_db, line))
	{
		if(!(pos = line.find(" | ")) || line.empty())
			throw std::invalid_argument("Invalid input file format");
		tmp_pair = check_dates(line.substr(0 , pos));
		tmp_pair = check_values(line.c_str() + (pos + 2), tmp_pair);
		
		it = _csv_map.find(tmp_pair.first);
		if (it != _csv_map.end())
			std::cout << it->second.value * tmp_pair.second.value << std::endl;
	}

}
