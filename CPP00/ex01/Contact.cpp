/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:20:35 by ael-youb          #+#    #+#             */
/*   Updated: 2023/04/28 17:16:45 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string	Contact::_get_input(std::string str) const
{
	std::string input = "";
	bool		is_valid = false;
	
	do
	{
		std::cout << str << std::flush;
		std::cin >> input;
		if(std::cin.good() && !input.empty())
			is_valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid or Empty input, try again" << std::endl;
		}
	} while (!is_valid);
	return (input);
}

std::string	Contact::_get_input_number(std::string str) const
{
	std::string input = "";
	bool		is_valid = false;

	do
	{
		std::cout << str << std::flush;
		std::cin >> input;
		if(std::cin.good() && !input.empty() && strspn(input.c_str(), "0123456789") == 10)
			is_valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Not a valid phone number, try again" << std::endl;
		}
	} while (!is_valid);
	return (input);
}

void	Contact::init(void)
{
	std::cin.ignore();
	this->set_first_name(_get_input("Enter your first name: "));
	this->set_last_name(_get_input("Enter your last name: "));
	this->set_nickname(_get_input("Enter your nickname: "));
	this->set_phone_number(_get_input_number("Enter your phone number: "));
	this->set_darkest_secret(_get_input("Enter your darkest secret: "));
	std::cout << std::endl;
}

std::string	Contact::_print(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void		Contact::view(void) const
{
	if (this->get_nickname().empty()) //si contact pas encore déclaré sinon impossible d'entrer ici
		return ;
	std::cout << "|" << std::setw(10) << this->get_index() << std::flush;
	std::cout << "|" << std::setw(10) << _print(this->get_first_name()) << std::flush;
	std::cout << "|" << std::setw(10) << _print(this->get_last_name()) << std::flush;
	std::cout << "|" << std::setw(10) << _print(this->get_nickname()) << std::flush;
	std::cout << "|" << std::endl;
}

void		Contact::display(void) const
{
	if (this->get_nickname().empty())
		return ;
	std::cout << std::endl;
	std::cout << "Contact " << this->get_index() << std::endl;
	std::cout << "First Name : " << this->get_first_name() << std::endl;
	std::cout << "Last Name : " << this->get_last_name() << std::endl;
	std::cout << "Nickname : " << this->get_nickname()	<< std::endl;
	std::cout << "Phone Number :" << this->get_phone_number() << std::endl;
	std::cout << "Darkest Secret :" << this ->get_darkest_secret() << std::endl;
}

void		Contact::set_index(int index)
{
	this->_index = index;
}

void		Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void		Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void		Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void		Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void		Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

int			Contact::get_index(void) const
{
	return (this->_index);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}