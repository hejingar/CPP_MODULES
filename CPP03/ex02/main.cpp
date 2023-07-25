/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:44:01 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/25 18:03:17 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << std::endl;
	{
		ScavTrap qw = ScavTrap("Quoicoubebou");
		FragTrap sl = FragTrap("Quoicoubae");
		sl.beRepaired(5);
		sl.highFivesGuys();
		sl.takeDamage(50);
		sl.attack("Quoicoubebou");
		qw.takeDamage(30);
	}
}