/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:46:52 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/10 19:48:17 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap cl = ClapTrap("Bae");
	cl.beRepaired(5);
	cl.takeDamage(5);
	cl.beRepaired(5);	
}