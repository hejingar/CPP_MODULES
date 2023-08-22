/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:08:52 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 13:24:58 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Use ./convert \"toConvert\" " << std::endl;
		return (0);
	}
	std::string s(av[1]);
	Convert::convert(s);
}
