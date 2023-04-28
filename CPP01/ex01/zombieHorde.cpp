/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:36:52 by ael-youb          #+#    #+#             */
/*   Updated: 2023/04/29 00:00:39 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie* zombies = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}