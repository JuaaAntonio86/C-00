/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:00:36 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/21 23:23:58 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

class Harl{

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:
				Harl();
				~Harl();
		void	complain( std::string level );
};
