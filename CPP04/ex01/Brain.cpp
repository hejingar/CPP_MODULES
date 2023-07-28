/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:45:03 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 13:59:24 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain& rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain copy assignement called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] == rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index)
{
	if (index > 100 || index < 0)
	{
		std::cout << "Ideas are limited to 0-100" << std::endl;
		return ("");
	}
	else
		return (this->ideas[index]);
}

void		Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i] == "")
		{
			this->ideas[i] = idea;
			break ;
		}
	}
	if (i == 100)
		std::cout << "Brain is full, can't add ideas" << std::endl;
}