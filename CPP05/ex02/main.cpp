/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/18 17:39:34 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	Bureaucrat* bur = new Bureaucrat("Sophie Vigier", 1);
	Form		form("Contrat d'ouverture MadeIn", 1, 1);
	
	std::cout << *bur;
	std::cout << form;
	
	bur->signForm(form);

	Form formu(form);
	std::cout << std::endl;
	
	bur->decrementGrade();
	bur->signForm(formu);
	
	delete bur;
}