/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:20:44 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/01 12:55:52 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{	
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::menu(void) const
{
	std::cout << std::endl;
	std::cout << "Use the following commands:" << std::endl;
	std::cout << "|==========================================|" << std::endl;
	std::cout << "|ADD:    to add a new contact              |" << std::endl;
	std::cout << "|SEARCH: to search for a contact           |" << std::endl;
	std::cout << "|EXIT:   to exit the PhoneBook             |" << std::endl;
	std::cout << "|__________________________________________|" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::add_contact(void)
{
	static int	i;
	this->_contacts[i % 8].init();
	if (std::cin.eof())
		exit(0);
	this->_contacts[i % 8].set_index(i % 8);
	i++;
}

void	PhoneBook::display_contacts(void) const
{
	std::cout << "|===========================================|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|===========================================|" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
		this->_contacts[i].view();
	std::cout << "|===========================================|" << std::endl;
}

int		PhoneBook::_read_input(void) const
{
	int		input = -1;
	bool	is_valid = false;
	
	do
	{
		std::cout << "Enter the contact index	" << std::endl << std::flush;
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << "Ctrl D detected, exiting..." << std::endl;
			exit(0);
		}
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if ( std::cin.good() && (input >= 0 && input < MAX_CONTACTS))
			is_valid = true;
		else
			std::cout << "Invalid input" << std::endl;
	} while (!is_valid);
	return (input);
}

void	PhoneBook::search_contact(void) const
{
	int	i = this->_read_input();
	this->_contacts[i].display();
}