/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:06:22 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/07 13:01:30 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <iostream>
#include <cstdlib>
#include <map>
#include <fstream>
#include <string>

class BitcoinExchange {
	private:
		// std::ifstream dataInput;
		std::map<std::string, float>& dataInput;
		std::map<std::string, float>& dataExchange;
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& rhs);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& rhs);

		void	readInput(std::string input) const;
		void	populateDataExchange(std::ifstream dataStream);
		void	populateDataInput(std::ifstream dataStream);
		int		checkFormatInput(std::string line);
		int		checkFormatDatabase(std::string line);
		int		checkFormatDate(std::string date); //done
};

#endif