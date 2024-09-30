/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:05:21 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:05:21 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string humanName);
		~HumanA();
		void	attack();
		void	setWeapon(Weapon& weaponTool);

	private:

		std::string _weapon;
		std::string _name;

}

#endif

