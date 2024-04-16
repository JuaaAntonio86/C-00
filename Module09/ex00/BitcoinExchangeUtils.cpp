/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchangeUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:20:04 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/16 19:09:44 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::pair<std::string, t_date>& bitCoin::check_values(const std::string& value_str, std::pair<std::string, t_date>&	tmp_pair){
		
	if(value_str.find(',') || value_str.empty() || !value_str.find('.') || !isValidstr(value_str))
	{
		if (value_str.compare("0"))
		{
			tmp_pair.second.error = "Error: bad input =>" + value_str;
			tmp_pair.second.flag = TRUE;
			// throw std::invalid_argument("Invalid value");
		}
	}
	tmp_pair.second.value = strtod(value_str.c_str(), NULL);
	if (tmp_pair.second.value < 0)
	{
		tmp_pair.second.error = "Error: not a positive number : >" + value_str;
		tmp_pair.second.flag = TRUE;
	}
	return tmp_pair;
}

