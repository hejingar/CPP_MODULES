/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:24:17 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/08 07:57:55 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


//Utils =========================================
const char* WSPACE = " \t\r";

static std::string& startTrim(std::string& s)
{
    s.erase(0, s.find_first_not_of(WSPACE));
    return s;
}

static std::string& endTrim(std::string& s)
{
    s.erase(s.find_last_not_of(WSPACE) + 1);
    return s;
}

static std::string& trim(std::string& s)
{
    return startTrim(endTrim(s));
}
//End utils =====================================

BitcoinExchange::BitcoinExchange()
{
	std::string database = "data/data.csv";
	std::ifstream databaseStream;
    int firstline = 0;
	databaseStream.open(database.c_str());
	if (databaseStream.is_open())
	{
		std::string buffer;
        while(getline(databaseStream, buffer))
        {
            if (firstline == 0)
            {
                firstline++;
                continue ;
            }
            if (checkFormatDatabase(buffer))
            {
                std::size_t i = buffer.find(",");
                std::string date = buffer.substr(0, i);
                std::string value = buffer.substr(i + 1, buffer.length() - i);
                dataExchange.insert(std::make_pair(date, std::atof(value.c_str())));
            }
            else
                std::cerr << buffer << " will not be printed : Parsing error" << std::endl;	
        }
        databaseStream.close();
    }
	else {
		std::cerr << "Couldn't open the Database, aborting everything, big btc crash" << std::endl;
	}
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	if (this != &rhs)
    {
        this->dataExchange = rhs.dataExchange;
    }
    return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs) : dataExchange(rhs.dataExchange) {}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::readInputFile(std::string input)
{
    std::ifstream fileInput;
    int firstline = 0;
    fileInput.open(input.c_str());
    if (fileInput.is_open())
    {
        std::string buffer;
        while(getline(fileInput, buffer))
        {
            if (firstline == 0)
            {
                firstline++;
                continue ;
            }
            if (checkFormatInput(buffer))
            {
                std::size_t i = buffer.find("|");
                std::string date = buffer.substr(0, i);
                date = trim(date);
                std::string valueStr = buffer.substr(i + 1, buffer.length() - i);
                valueStr = trim(valueStr);
                float value = std::atof(valueStr.c_str());
                if (value > 1000.0)
                    std::cerr << "Error: Too large a number." << std::endl;
                else if (value < 0)
                    std::cerr << "Error : Not a positive number." << std::endl;
                else
                {
                    std::map<std::string, float>::iterator it = this->dataExchange.upper_bound(date);
                    std::pair<std::string, float> p = *(--it);
                    // std::cout << "Pair found : " << p.first << ":" << p.second << std::endl;
                    std::cout << date << " => " << valueStr << " = " << value * p.second << std::endl;
                }
            }
            else
                std::cerr << "Error : bad input => " << buffer << std::endl;	
        }
        fileInput.close();
    }
    else
    {
        std::cerr << "Couldn't open your input file buddy!" << std::endl;
        return ;
    }
}


int		BitcoinExchange::checkFormatInput(std::string line)
{
	std::size_t i = line.find("|");
	if (i == std::string::npos)
		return (0);
	std::string date = line.substr(0, i);
	std::string value = line.substr(i + 1, line.length() - i);
    date = trim(date);
    value = trim(value);
	if (!checkFormatDate(date))
		return (0);
	if (value.find_first_not_of("0123456789.") != std::string::npos && value[0] != '-')
		return (0);
	return (1);
}

int		BitcoinExchange::checkFormatDatabase(std::string line)
{
	std::size_t i = line.find(",");
	if (i == std::string::npos)
		return (0);
	std::string date = line.substr(0, i);
	std::string value = line.substr(i + 1, line.length() - i);
	if (!checkFormatDate(date))
		return (0);
	if (value.find_first_not_of("0123456789.") != std::string::npos)
		return (0);
	return (1);
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
