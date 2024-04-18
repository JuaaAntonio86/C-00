/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:36 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/18 19:14:47 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bitCoin::bitCoin(const std::string& csv_file)
{
	_csv_db.open(csv_file, std::ifstream::in);
	if (!_csv_db.is_open())
		throw std::invalid_argument("Invalid file name: please crate a valid csv file in the root of this directory");
	// if (_csv_db.peek() == std::ifstream::traits_type::eof())
	// 	throw std::invalid_argument("Empty file: the csv file is empty");
}

bitCoin::~bitCoin()
{
	_csv_map.clear();
	_csv_db.close();
	_value_db.close();	
}

void	bitCoin::loadFiles(const std::string& argv){
	_value_db.open(argv, std::ifstream::in);
	if (!_value_db.is_open())
		throw std::invalid_argument("Invalid file name: please pass as argument a valid \
			.txt file which is in the root of this directory");
	// if (_value_db.peek() == std::ifstream::traits_type::eof()) 
	// 	throw std::invalid_argument("Empty file: the value file is empty");
}

void bitCoin::parse_csv(){
	std::string						line;
	int								pos;
	std::pair<std::string, t_date>	tmp_pair;
	
	std::getline(_csv_db, line);
	if( line.compare("date,exchange_rate"))
		throw std::invalid_argument("Invalid file name: please crate a valid csv \
			file in the root of this directory");
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
			tmp_pair.second.error = "1Error: bad input => " + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
		}
	if (str[4] != '-' || str[7] != '-' || checkForHyphen(str) != 2)
		{
			tmp_pair.second.error = "2Error: bad input => " + str;
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
			tmp_pair.second.error = "3Error: bad input => " + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
		}
	if(!isLeapYear(tmp_pair.second.year) && tmp_pair.second.month == 2 && tmp_pair.second.day > 28)
		{
			tmp_pair.second.error = "4Error: bad input => " + str;
			tmp_pair.second.flag = TRUE;
			//throw std::invalid_argument("Invalid date format: yyyy-mm-dd leap");
		}
	tmp_pair.first = str;
	return(tmp_pair);
}

bool bitCoin::isValidstr(const std::string& str) const{
	std::string needle = "-.0123456789";
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
		if (j == 12)
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
		throw std::invalid_argument("Invalid header: please crate a valid value \
			file in the root of this directory with this header format: date | value");
	while(std::getline(_value_db, line))
	{
		if(!(pos = line.find(" | ")) || line.empty())
			throw std::invalid_argument("Invalid input file format");
		else{
			tmp_pair = check_dates(line.substr(0 , pos));
			tmp_pair = check_values(line.c_str() + (pos + 3), tmp_pair);

		std::string tmp = tmp_pair.first;
		// tmp.erase(tmp.size() - 2);
		//tmp.append("11");
		it = _csv_map.find(tmp);
		if (tmp_pair.second.flag)
			std::cout <<  tmp_pair.second.error << std::endl;
		else if(it != _csv_map.end()){
			std::cout << it->first << " => " 
			<< it->second.value * tmp_pair.second.value << std::endl;
		}
		else if (it == _csv_map.end()){
			find_closest(tmp_pair);
		}
		}
	}
}

void bitCoin::find_closest(std::pair<std::string, t_date>&	tmp_pair) const{
	int	day = tmp_pair.second.day;
	int	month =  tmp_pair.second.month;
	int	year =  tmp_pair.second.year;
	std::cout <<  day << month << year << std::endl;

	std::map<std::string, t_date>::const_reverse_iterator rit;
	for (rit=_csv_map.rbegin(); rit != _csv_map.rend(); ++rit)
	{
		if((rit->second.year <= year && rit->second.month <= month && rit->second.day <= day) \
			|| (rit->second.year <= year && rit->second.month < month) || (rit->second.year < year))
		{
			std::cout << rit->first << " " 
			<< rit->second.value << " " << tmp_pair.second.value << std::endl;
			std::cout << rit->first << " => " 
			<< rit->second.value * tmp_pair.second.value << std::endl;
			break;
		}
	}
}

