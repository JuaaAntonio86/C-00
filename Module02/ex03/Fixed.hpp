/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:08:37 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/27 23:22:14 by juan-anm         ###   ########.fr       */
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

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		
		Fixed 				&operator=(Fixed const &rhs);

/* ***********************COMPARISON OPERATORS***************************** */

		bool				operator>(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;

/* ***********************ARITHMETIC OPERATORS****************************** */

		Fixed				operator+(Fixed const &rhs) const;
		Fixed				operator-(Fixed const &rhs) const;
		Fixed				operator*(Fixed const &rhs) const;
		Fixed				operator/(Fixed const &rhs) const;

/* ***********************INCREMENT/DECREMENT OPERATORS********************* */

		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

/* ***********************MIN/MAX FUNCTION********************************** */

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif
