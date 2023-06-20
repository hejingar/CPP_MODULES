/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 22:15:23 by ael-youb          #+#    #+#             */
/*   Updated: 2023/06/19 16:55:01 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF =  str;

	std::cout << "String variable address: " << &str << std::endl;
	std::cout << "String pointer held : " << stringPTR << std::endl;
	std::cout << "String ref held : " << &stringREF << std::endl;

	std::cout << "String value : " << str << std::endl;
	std::cout << "String value : " << *stringPTR << std::endl;
	std::cout << "String value : " << stringREF << std::endl;
}