/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:42:58 by ael-youb          #+#    #+#             */
/*   Updated: 2023/04/29 00:01:02 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int		N = 5;
	Zombie* zombies = zombieHorde(N, "Pipou");
	
	for(int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	
	delete [] zombies;
}