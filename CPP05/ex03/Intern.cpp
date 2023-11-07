/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:54:24 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/31 19:49:06 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& rhs)
{
	*this = rhs;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	(void)rhs;

	return (*this);
}

Intern::~Intern() {}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	try
	{
		std::string formuu[] = 
		{
			"robotomy request",
			"presidential pardon",
			"shrubbery creation"
		};
		AForm* forms[] = 
		{
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target),
			new ShrubberyCreationForm(target)
		};

		for (int i = 0; i < 3; i++)
		{
			if (name == formuu[i])
			{
				std::cout << "Intern creates " << name << std::endl;
				for (int i = 0; i < 3; i++)
				{
					if (name != formuu[i])
					{
						AForm* lol = forms[i];
						delete lol;
					}
				}
				return (forms[i]);
			}
		}
		std::cout << "Intern couldn't create " << name << std::endl;
		for (int i = 0; i < 3; i++)
		{
			AForm* lol = forms[i];
			delete lol;
		}
		return NULL;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << '\n';
		return NULL;
	}
	return NULL;
}