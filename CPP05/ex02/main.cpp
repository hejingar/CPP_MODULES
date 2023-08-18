/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 19:56:34 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
	Bureaucrat* bur = new Bureaucrat("Sophie Vigier", 1);
	ShrubberyCreationForm form("Home");
	
	std::cout << *bur;
	std::cout << form;
	
	bur->signForm(form);
	bur->executeForm(form);
	bur->executeForm(form);
	bur->executeForm(form);

	RobotomyRequestForm dead("ael-youb");
	
	bur->signForm(dead);
	bur->executeForm(dead);
	
	std::cout << std::endl;
	
	delete bur;
}