/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 06:54:55 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 06:54:55 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout 
	<< "Memory address of string	  : "	<< &string << "\n"
	<< "Memory address stored in stringPTR: "	<< stringPTR << "\n"
	<< "Memory address stored in stringREF: "	<< &stringREF << "\n"

	<< "Value of string		     : " 		<< string << "\n"
	<< "Value pointed to by stringPTR: "		<< *stringPTR << "\n"
	<< "Value pointed to by stringREF: "		<< stringREF << std::endl;

}
