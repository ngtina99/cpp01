/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:41:40 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/03 19:41:40 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}


void	Harl::debug( void )
{	
	std::cout << "[ DEBUG ]\n" <<
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n" <<
	"I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" <<
	"I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERRROR ]\n" <<
	"This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levelType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*memberFunctionPointer[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int i = DEBUG;
	while (i <= ERROR && level != levelType[i])
		i++;
	(this->*memberFunctionPointer[i])();
	return ;
}

// this->*: This is required to dereference the pointer to the member 
// function. this refers to the current instance of the class, 
// and * is used to dereference the pointer to the member function.
// *(memberFunctionPointer[i])() does not work because you can't dereference the 
// function pointer without specifying the class instance (this). It would result 
// in a syntax error since you're not telling the compiler which object the function should operate on
