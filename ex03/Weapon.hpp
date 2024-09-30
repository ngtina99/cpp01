/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:29:42 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:29:42 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon 
{

	public:

		Weapon( std::string weaponType);
		~Weapon();
		const std::string&	getType( void );
		void				setType(std::string weaponType);

	private:

		std::string _type
}

#endif