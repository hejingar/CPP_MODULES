/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:00:50 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/03 00:42:23 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string filename, std::string s1, std::string s2)
{
	std::string replace = filename + ".replace";
	this->_s1 = s1;
	this->_s2 = s2;
	_origin_file.open(filename.c_str());
	_replaced_file.open(replace.c_str());
}

Replacer::~Replacer()
{
	_origin_file.close();
	_replaced_file.close();
}

void	Replacer::readAndReplace(void)
{
	std::string buffer;
	size_t		pos = 0;

	if(this->_origin_file.is_open() && this->_replaced_file.is_open())
	{
		while(getline(this->_origin_file, buffer))
		{
			while(pos < buffer.length())
			{
				pos = buffer.find(this->_s1, pos);
				if (pos == std::string::npos)
            		break;
				buffer.erase(pos, this->_s1.length());
        		buffer.insert(pos, this->_s2);
				pos += this->_s2.length();
				//fun fact : incrementer de 1 et mettre s1 = toto et s2 = ttoto fait une boucle infinie
			}
			this->_replaced_file << buffer + "\n";
			pos = 0;
		}
	}
	else
		std::cout << "Error: Files not open or does not exist" << std::endl;	
}