/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 01:18:05 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/03 02:03:05 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int	main( void )
{
	Harl harl = Harl();
	
	harl.complain("debug");
	std::cout << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	harl.complain("ez");
	std::cout << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	harl.complain("no");
	std::cout << std::endl;
	return (0);	
}