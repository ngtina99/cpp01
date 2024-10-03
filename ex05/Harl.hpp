/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:41:46 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/03 19:41:46 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

enum	complainType
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
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