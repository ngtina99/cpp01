/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombirHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 04:41:00 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 04:41:00 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N , std::string zombieName )
{
	Zombie	*zombies = new Zombie[N];
	if (!zombies)
	{
		std::cerr << "Memory error" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		zombies[i].setName(zombieName);
	return (zombies);
}
