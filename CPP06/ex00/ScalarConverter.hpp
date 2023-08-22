/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:52:04 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 22:51:09 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

class ScalarConverter
{
	private:
	
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& rhs);
		~ScalarConverter();
		ScalarConverter&	operator=(const ScalarConverter& rhs);

		static void	convert(std::string& toCast);
		
};

#endif