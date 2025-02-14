/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:59:50 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/30 07:59:50 by thuy-ngu         ###   ########.fr       */
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
	std::string levelType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*memberFunctionPointer[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 

	int i = DEBUG;
	while (i < ERROR_PLUS && level != levelType[i])
		i++;
	bool otherProblem;
	switch( i )
	{
		case ERROR_PLUS:
			otherProblem = true;
			break ;
		default:
			otherProblem = false;
	}
	while (i <= ERROR_PLUS)
	{
		switch( i )
		{
			case DEBUG:
				(this->*memberFunctionPointer[i])();
				break;
			case INFO:
				(this->*memberFunctionPointer[i])();
				break;
			case WARNING:
				(this->*memberFunctionPointer[i])();
				break;
			case ERROR:
				(this->*memberFunctionPointer[i])();
				break;
			default:
				if (otherProblem)
					std::cerr << "[ Probably complaining about insignificant problems ]\n" << std::endl;
				break;
		}
		i++;
	}
}
