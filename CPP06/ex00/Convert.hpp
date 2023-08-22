/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:52:04 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 13:01:57 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>

class Convert
{
	private:
	
	public:
		Convert();
		Convert(const Convert& rhs);
		~Convert();
		Convert&	operator=(const Convert& rhs);

		static void	convert(std::string& toCast);
		
};

#endif