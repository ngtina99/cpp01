/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 03:51:14 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 03:51:14 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{

	public:

		Zombie();
		~Zombie();

		void announce( void );

	private:

		std::string _name;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif