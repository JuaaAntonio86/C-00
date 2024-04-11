/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:15:39 by juan-anm          #+#    #+#             */
/*   Updated: 2024/04/11 18:03:35 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <iterator>
# include <deque>
# include <map>
# include <string>
# include <vector>
# include <strstream>


class Span{
	private:
		unsigned int 		_Nsize;
		std::vector<int>	_Span;
		Span();
	public:
							Span(const Span& other);
							Span& operator=(const Span& other);
							Span(int N);
							~Span();

		void				addNumber(int N);
		void				addNumber(std::vector<int>::iterator s, std::vector<int>::iterator e);
		unsigned int		shortestSpan();
		long int			longestSpan();
		void				printSpan();
};

#endif
