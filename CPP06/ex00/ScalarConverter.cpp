/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:45:56 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 22:52:05 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
{
	*this = rhs;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
    (void)rhs;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(std::string& toCast)
{
	std::string special[6] = 
	{
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};

	std::string toChar = "";
	long long	toInt = 0;
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
	
	toInt = std::atoll(toCast.c_str());
    
	if (toCast[toCast.length() - 1] == 'f')
	{
		toFloat = std::atof(toCast.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else
	{
		toDouble = std::atof(toCast.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	for (int i = 0; i < 6; i++)
	{
		if (toCast == special[i])
		{
			toChar = "impossible";
			break ;
		}
	}
	
	if (toChar == "" && toInt < 256 && toInt >= 0)
	{
        if (std::isprint(toInt))
		{
            toChar = "'";
            toChar += static_cast<char>(toInt);
            toChar += "'";            
        }
	}
	else if (toChar == "")
	{
		toChar = "Non displayable";
	}
	
    std::cout << "char: " << toChar << std::endl;
    if (toChar == "impossible" || (toInt < INT_MIN || toInt > INT_MAX))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << toInt << std::endl;
    
    if (toChar == "impossible" && toFloat == 0)
    {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else
    {
        if (toChar != "impossible" && toFloat - static_cast<int>(toFloat) == 0)
        {
            std::cout << "float: " << toFloat << ".0f" << std::endl;
            std::cout << "double: " << toDouble << ".0" << std::endl;
        }
        else
        {
            std::cout << "float: " << toFloat << "f" << std::endl;
            std::cout << "double: " << toDouble << std::endl;
        }
    }
}