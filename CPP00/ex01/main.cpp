/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:22:13 by ael-youb          #+#    #+#             */
/*   Updated: 2023/04/28 17:07:26 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

int main(void)
{
	PhoneBook phonebook;
	std::string input = "";
	int started = 0;
	
	phonebook.menu();
	while(input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.display_contacts();
			phonebook.search_contact();
		}
		else
			if (started == 1)
				std::cout << "Invalid command" << std::endl;
			else
				started = 1;
		std::cout << "> " << std::flush;
		std::cin >> input;
	}
	std::cout << "All your contacts are lost forever" << std::endl;
}