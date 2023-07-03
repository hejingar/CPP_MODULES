/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 01:15:01 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/03 02:01:38 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	
}

Harl::~Harl( void )
{
	
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	p_func lesFonctions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lesLevels[] = {"debug", "info", "warning", "error"};
	int i;
	
	for(i = 0; i < 4; i++)
	{
		if (!(lesLevels[i].compare(level)))
			break;
	}
	if (i < 4)
		(this->*lesFonctions[i])();
}