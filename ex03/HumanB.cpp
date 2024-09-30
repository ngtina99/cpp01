/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:30:52 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:30:52 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string humanName) 
	: _name(humanName), _hasWeapon (false), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon& weaponTool)
{
	this->_weapon = &weaponTool;
	this->_hasWeapon = true;
}


void	HumanB::attack()
{
	if (this->_hasWeapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << ".\n";
	else
		std::cout << this->_name << " tried to attack with no weapon.\n";
}
