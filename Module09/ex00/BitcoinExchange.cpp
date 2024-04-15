/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:31:36 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/15 19:47:30 by juan-anm         ###   ########.fr       */
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
		tmp_pair.first = line.substr(0 , pos);
		tmp_pair.second = atof(line.c_str() + (pos + 1));
		_csv_map.insert(tmp_pair);
	}

}

void	bitCoin::printResult() {
	std::cout
		<< "HELLLOOOO" << std::endl;
	parse_csv();
	std::map<std::string, double>::iterator it = _csv_map.find("2022-03-29");
	if (it != _csv_map.end())
		{
			std::cout << it->second << std::endl;
		}

}
