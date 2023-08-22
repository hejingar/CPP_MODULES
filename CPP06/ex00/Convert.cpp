/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:45:56 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 13:25:34 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const Convert& rhs)
{
	*this = rhs;
}

Convert&	Convert::operator=(const Convert& rhs) {}

Convert::~Convert() {}

void	Convert::convert(std::string& toCast)
{
	std::string special[6] = 
	{
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};

	std::string toChar = "";
	int			toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;
	
	if (toCast.size() == 1 && std::isprint(toCast[0]) && !std::isdigit(toCast[0]))
	{
		toChar = toCast[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" <<std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" <<std::endl;
		return ;
	}
	
	toInt = std::atoi()
	
}