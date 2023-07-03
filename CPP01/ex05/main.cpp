/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 01:18:05 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/03 01:19:56 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int	main( void )
{
	Harl harl = Harl();
	
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("ez");
	harl.complain("error");
	harl.complain("info");
	harl.complain("no");
	return (0);	
}