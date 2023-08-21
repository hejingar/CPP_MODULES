/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/21 17:41:41 by ael-youb         ###   ########.fr       */
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
        Bureaucrat* bur = new Bureaucrat("Sophie Vigier", 1);
	    Intern* pipo = new Intern();

		AForm* form = pipo->makeForm("shrubbery creation", "42Paris");
		if (!form)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete bur;
			delete pipo;
			return (1);
		}
	    std::cout << *bur;
        std::cout << *form;
        
        bur->signForm(*form);
        bur->executeForm(*form);
        bur->executeForm(*form);
        bur->executeForm(*form);

        AForm* dead = pipo->makeForm("robotomy request", "ael-youb");
		if (!dead)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete bur;
			delete pipo;
			delete form;
			return (1);
		}
        std::cout << *dead;

        bur->signForm(*dead);
        bur->executeForm(*dead);
        
        AForm* mercy = pipo->makeForm("presidential pardon", "ael-youb");
		if (!mercy)
		{
			std::cout << "Error creating form, abort" << std::endl;
			delete bur;
			delete pipo;
			delete form;
			delete dead;
			return (1);
		}
        std::cout << *mercy;
        bur->signForm(*mercy);
        bur->executeForm(*mercy);
        delete bur;
		delete pipo;
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
        Bureaucrat* bur = new Bureaucrat("Useless Intern", 150);
	    ShrubberyCreationForm form("Home");
	
	    std::cout << *bur;
        std::cout << form;
        
        bur->signForm(form);
        bur->executeForm(form);
        bur->executeForm(form);
        bur->executeForm(form);

        RobotomyRequestForm dead("ael-youb");
        std::cout << dead;

        bur->signForm(dead);
        bur->executeForm(dead);
        
        PresidentialPardonForm mercy("ael-youb");
        std::cout << mercy;
        bur->signForm(mercy);
        bur->executeForm(mercy);
        
        std::cout << std::endl;
        
        delete bur;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	
}