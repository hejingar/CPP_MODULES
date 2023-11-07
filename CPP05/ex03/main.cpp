/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/31 19:52:41 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
     std::cout << "\n-------------------CEO----------------------------------" << std::endl;
    try
    {
        Bureaucrat bur = Bureaucrat("Sophie Vigier", 1);
	    Intern pipo = Intern();

		AForm* form = pipo.makeForm("shrubbery creation", "42Paris");
		if (!form)
		{
			std::cout << "Error creating form, abort" << std::endl;
			return (1);
		}
	    std::cout << bur;
        std::cout << *form;
        
        bur.signForm(*form);
        bur.executeForm(*form);
        bur.executeForm(*form);
        bur.executeForm(*form);

        AForm* dead = pipo.makeForm("robotomy request", "ael-youb");
		if (!dead)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete form;
			return (1);
		}
        std::cout << *dead;

        bur.signForm(*dead);
        bur.executeForm(*dead);
        
        AForm* mercy = pipo.makeForm("presidential pardon", "ael-youb");
		if (!mercy)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete form;
			delete dead;
			return (1);
		}
        std::cout << *mercy;
        bur.signForm(*mercy);
        bur.executeForm(*mercy);
		delete form;
		delete dead;
		delete mercy;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------------------LIL MAN-------------------------" << std::endl;
    try
    {
        Bureaucrat bur = Bureaucrat("Useless Intern", 150);
	    ShrubberyCreationForm form("Home");
	
	    std::cout << bur;
        std::cout << form;
        
        bur.signForm(form);
        bur.executeForm(form);
        bur.executeForm(form);
        bur.executeForm(form);

        RobotomyRequestForm dead("ael-youb");
        std::cout << dead;

        bur.signForm(dead);
        bur.executeForm(dead);
        
        PresidentialPardonForm mercy("ael-youb");
        std::cout << mercy;
        bur.signForm(mercy);
        bur.executeForm(mercy);
        
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	
}