/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:59:46 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:59:46 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_2_HPP
# define HARL_2_HPP

# include <iostream>

enum	complainType
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	ERROR_PLUS
};

class Harl
{
	public:

		Harl();
        ~Harl();
		void complain( std::string level );

	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

#endif