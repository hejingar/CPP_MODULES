/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:51:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/03 00:19:01 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int ac, char **av)
{
	if (ac < 4)
		std::cout << "Not enough arguments, quitting..." << std::endl;
	else
	{
		Replacer* replacer = new Replacer(av[1], av[2], av[3]);
		replacer->readAndReplace();
		delete replacer;
	}
	return (0);
}