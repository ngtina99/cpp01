/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 04:42:54 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 04:42:54 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name <<  " quit" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name <<  ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string zombieName)
{
	this->_name = zombieName;
}
