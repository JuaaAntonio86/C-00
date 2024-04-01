/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:02:48 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/02 00:17:28 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <iomanip>

class ScalarConverter
{
	private:
							ScalarConverter();
							ScalarConverter(const ScalarConverter &other);
							~ScalarConverter();
		ScalarConverter&	operator=(const ScalarConverter &other);
	public:
		static void 		convert(std::string input);
};

#endif
