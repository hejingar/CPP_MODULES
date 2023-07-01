/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:20:39 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/01 12:25:30 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#endif

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <string>
#include <cstring>
#include <iomanip>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		int			_index;

		std::string	_print(std::string str) const;
		std::string	_get_input(std::string str) const;
		std::string	_get_input_number(std::string str) const;

	public:
		Contact();
		~Contact();

		void		init(void);
		void		display(void)const;
		void		view(void) const;
		
		int			get_index(void)	const;
		std::string get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_darkest_secret(void) const;
		std::string	get_phone_number(void) const;

		void		set_index(int index);
		void		set_first_name(std::string first_name);
    	void		set_last_name(std::string last_name);
   		void		set_nickname(std::string nickename);
   		void		set_darkest_secret(std::string darkest_secret);
		void		set_phone_number(std::string phone_number);
};