/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:08:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/22 18:25:59 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

	private:
		int					_value;
		static const int	_bits = 8;

	public:
							Fixed(void);
							Fixed(Fixed const &other);
							~Fixed(void);
		Fixed 				&operator=(Fixed const &rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
