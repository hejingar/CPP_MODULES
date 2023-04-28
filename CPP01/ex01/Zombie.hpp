/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:48:56 by ael-youb          #+#    #+#             */
/*   Updated: 2023/04/28 23:40:08 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#endif

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		~Zombie();
		
		void		announce( void );
		void		setName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );