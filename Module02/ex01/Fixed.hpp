/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:08:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/27 11:12:10 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	private:
		int					_value;
		static const int	_bits = 8;

	public:
							Fixed(void); 
							Fixed(const int fpvalue);
							Fixed(const float ffpvalue);
							Fixed(Fixed const &other);
							~Fixed(void);
		Fixed 				&operator=(Fixed const &rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif
