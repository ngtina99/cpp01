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
		Harl harl;
	if (argc == 2)
		harl.complain(argv[1]);
	else
		harl.complain("irrelevant string");
	return (EXIT_SUCCESS); //or let's see if less than this 
}