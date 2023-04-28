/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:00:54 by ael-youb          #+#    #+#             */
/*   Updated: 2023/04/28 23:13:48 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::cout << "Let's create a zombie on the stack and make it announce" << std::endl << std::endl;
	randomChump("notBae");
	std::cout << "As soon as it quits the function scope, the zombie is destroyed" << std::endl << std::endl;
	
	std::cout << "A more reliable way to create it, if you want your objects to live throught the scopes, is allocating it on the heap" << std::endl << std::endl;
	Zombie* zombae = newZombie("Bae");
	(*zombae).announce();
	std::cout << "But you'll have to keep track of them, and delete them when you're done. Next instruction is the deletion of the heap zombie" << std::endl << std::endl;
	delete zombae;
}