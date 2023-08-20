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
     std::cout << "\n-------------------CEO----------------------------------" << std::endl;
    try
    {
        Bureaucrat* bur = new Bureaucrat("Sophie Vigier", 1);
	    ShrubberyCreationForm form("42Paris");
	
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
        delete bur;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n-------------------USELESS INTERN-------------------------" << std::endl;
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