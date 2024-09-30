/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 04:43:09 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 04:43:09 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	Zombie::checkInput(const std::string &argv)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (1);
		if (len >= 10)
			return (1);
		len++;
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if(Zombie::checkInput(argv[1]))
		{
			std::cerr << "the N input is invalid" << std::endl;
			return (1);
		}
		int N = atoi(argv[1]);
		std::string name = argv[2];
		Zombie *zombies = zombieHorde(N, name);
		if (zombies)
			delete [] zombies;
	}
	else
	{
		std::cerr << "./ex01 <N> <name>" << std::endl;
		return (1);
	}
}