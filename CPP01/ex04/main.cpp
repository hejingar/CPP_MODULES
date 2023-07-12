/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:51:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/12 13:07:50 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int ac, char **av)
{
	if (ac < 4)
		std::cout << "Not enough arguments, quitting..." << std::endl;
	else
	{
		if (av[2][0] == 0 || av[3][0] == 0)
		{
			std::cout << "Cant search for empty strings" << std::endl;
			return (0);
		}
		Replacer* replacer = new Replacer(av[1], av[2], av[3]);
		replacer->readAndReplace();
		delete replacer;
	}
	return (0);
}