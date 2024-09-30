/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 04:41:03 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 04:41:03 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{

	public:

		Zombie();
		~Zombie();
	
		void announce( void );
		void setName( std::string zombieName );
		static int	checkInput(const std::string &argv);

	private:

		std::string _name;

};

Zombie	*zombieHorde( int N , std::string name );

#endif
