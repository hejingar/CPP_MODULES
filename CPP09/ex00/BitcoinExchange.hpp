/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:06:22 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/11 14:13:59 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <iostream>
#include <cstdlib>
#include <map>
#include <fstream>
#include <string>
#include <iomanip>

class BitcoinExchange {
	private:
		std::map<std::string, float>	dataExchange;
		int								abort;
	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& rhs);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& rhs);

		void	readInputFile(std::string input);

		int		checkFormatDatabase(std::string line);
		int		checkFormatInput(std::string line);
		int		checkFormatDate(std::string date); //done

		int		getAbort();
};

#endif