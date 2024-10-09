/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 03:51:57 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 03:51:57 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << _name << " quit" << std::endl;
	return;
}

Zombie::Zombie(std::string zombieName) : _name(zombieName)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << " quit" << std::endl;
	return;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
