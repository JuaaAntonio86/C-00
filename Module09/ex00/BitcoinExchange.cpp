/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:36 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/16 01:07:18 by juan-anm         ###   ########.fr       */
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
	//if (!_value_db.is_open())
			//throw std::invalid_argument("Invalid file name: please pass as argument a valid .txt file which is in the root of this directory");
}

void bitCoin::parse_csv(){
	std::string					line;
	int							pos;
	std::pair<std::string, double>	tmp_pair;
	
	std::getline(_csv_db, line);
	if( line.compare("date,exchange_rate"))
		throw std::invalid_argument("Invalid file name: please crate a valid csv file in the root of this directory");
	while(std::getline(_csv_db, line))
	{
		if(!(pos = line.find(',')) || line.empty())
			throw std::invalid_argument("Invalid csv file format");
		tmp_pair.first = check_dates(line.substr(0 , pos));
		tmp_pair.second = atof(line.c_str() + (pos + 1));
		_csv_map.insert(tmp_pair);
	}

}

const std::string&	bitCoin::check_dates(const std::string& str) const{
	int				year;
	int				month;
	int				day;
	int				calendar[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	std::string		temp;
	
	if (str.length() != 10 || str.find_first_not_of("-0123456789"))
		{
			std::cout << str<< std::endl;
			throw std::invalid_argument("Invalid date format: yyyy-mm-dd AA");
		}
	if (str[4] != '-' || str[7] != '-' || checkForHyphen(str) != 2)
		throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
	temp = str.substr(0, 4);
	year = atoi(temp.c_str());
	temp = str.substr(5, 2);
	month = atoi(temp.c_str());
	temp = str.substr(8, 2);
	day = atoi(temp.c_str());
	if ((year < 2009 || year > 2024) || (month < 1 || month > 12) || (day < 1 || day > calendar[month]))
		throw std::invalid_argument("Invalid date format: yyyy-mm-dd NOOOOO");
	if(!isLeapYear(year) && month == 2 && day > 28)
		throw std::invalid_argument("Invalid date format: yyyy-mm-dd leap");
	return(str);
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
}
