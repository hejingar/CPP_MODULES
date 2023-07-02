/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:00:59 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/02 22:25:44 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replacer
{
	private:
		std::ifstream	_origin_file;
		std::ofstream	_replaced_file;
		std::string		_s1;
		std::string		_s2;
		
	public:
		Replacer(std::string filename, std::string s1, std::string s2);
		~Replacer();

		void	readAndReplace(void);
		
};

#endif