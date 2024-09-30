/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:44:26 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:44:26 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weaponType) : _type(weaponType)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const std::string&	Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}