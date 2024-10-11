/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:59:29 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:59:29 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	switch( argc )
	{
		case 2:
			harl.complain(argv[1]);
			break ;
		default:
			std::cerr << "Please put (only) one argument with no spaces" << std::endl;
			std::cerr << "from the following: DEBUG, INFO, WARNING, ERROR or else" << std::endl;
	}
}
