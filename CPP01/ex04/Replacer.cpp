/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:00:50 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/02 22:38:18 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string filename, std::string s1, std::string s2)
{
	this->_s1 = s1;
	this->_s2 = s2;
	_origin_file.open(filename);
	_replaced_file.open(filename + ".replace");
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
			while(pos += this->_s2.length())
			{
				pos = buffer.find(this->_s1, pos);
				if (pos == std::string::npos)
            		break;
				buffer.erase(pos, this->_s1.length());
        		buffer.insert(pos, this->_s2);
			}
			this->_replaced_file << buffer;
		}
	}
	else
		std::cout << "Error: Files not open" << std::endl;	
}