/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:20:01 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/01 13:00:05 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#endif

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <string>
#include <cstring>
#include <iomanip>

# define MAX_CONTACTS 8
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[MAX_CONTACTS];
		int		_read_input(void) const;
		
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact() const;
		void	display_contacts() const;
		void	menu() const;
		
};