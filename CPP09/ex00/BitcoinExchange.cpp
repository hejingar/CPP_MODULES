/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:24:17 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/07 13:16:56 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::string database = "data/data.csv";
	std::ifstream databaseStream;
	databaseStream.open(database.c_str());
	if (databaseStream.is_open())
	{
		
	}
	else {
		std::cerr << "Couldn't open the Database, aborting everything, big btc crash" << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs)
{
	//TODO
	*this = rhs;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	//TODO
	if (this != &rhs)
		return (*this);
}

BitcoinExchange::~BitcoinExchange() {}


int		BitcoinExchange::checkFormatInput(std::string line)
{
	std::size_t i = line.find("|");
	if (i != std::string::npos)
	{
		
	}
}

int		BitcoinExchange::checkFormatDate(std::string date)
{
	if (date.length() != 10)
		return (0);
	if (date[4] != '-' || date[7] != '-')
		return (0);
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	if (year.find_first_not_of("0123456789") != std::string::npos)
		return (0);
	if (month.find_first_not_of("0123456789") != std::string::npos)
		return (0);
	if (day.find_first_not_of("0123456789") != std::string::npos)
		return (0);
	
	int monthInt = std::atoi(month.c_str());
	int yearInt = std::atoi(year.c_str());
	std::cout << year << " / " << month << " / " << day << std::endl;
	if (std::atoi(year.c_str()) < 2009 || std::atoi(year.c_str()) > 2023)
		return (0);
	if (monthInt < 1 || monthInt > 12)
		return (0);

	//clean tout ca
	if (monthInt == 1 || monthInt == 3 || monthInt == 5 || monthInt == 7 || monthInt == 8 || monthInt == 10 || monthInt == 12)
	{
		if (std::atoi(day.c_str()) < 1  || std::atoi(day.c_str()) > 31 )
			return (0);
	}
	else if (monthInt == 2)
	{
		if ((yearInt % 4 == 0 && yearInt % 100 != 0) || yearInt % 400 == 0)
		{
			if (std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 29)
				return (0);
		}
		else if (std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 28)
			return (0);
			
	}
	else
	{
		if (std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 30)
			return (0);
	}
	return (1);
}
