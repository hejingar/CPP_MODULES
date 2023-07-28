/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:38:24 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 13:38:56 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Hayawan")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string typu)
{
	this->type = typu;
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal Copy Assignement called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making a weird sound" << std::endl;
}