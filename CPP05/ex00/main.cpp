/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/14 15:14:09 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{
	Bureaucrat* bur = new Bureaucrat("salut", 1);
	
	std::cout << *bur;
	delete bur;

	try
	{
		Bureaucrat zom("salut", 1);
		zom.incrementGrade();
		std::cout << zom;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}