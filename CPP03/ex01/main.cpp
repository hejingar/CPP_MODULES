/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:44:01 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/25 17:50:08 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	{
		ClapTrap cl = ClapTrap("Bae");
		cl.beRepaired(5);
		cl.takeDamage(5);
		cl.beRepaired(5);
		cl.takeDamage(15);
		cl.beRepaired(10);
	}
	std::cout << std::endl;
	{
		ScavTrap sl = ScavTrap("Quoicoubae");
		sl.beRepaired(5);
		sl.guardGate();
		sl.takeDamage(50);
	}
}