/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:42:40 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/20 18:52:34 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>

class	Replace
{
	private:
		const std::string	_s1;
		const std::string	_s2;
		const std::string	_file;

	public:
							Replace(const std::string	_s1, const std::string	_s2, \
									const std::string	file);
							~Replace();
		void				replace_strings();
};


# endif