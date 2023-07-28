/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:11:06 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 18:06:15 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("Hayawan")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string typu)
{
	this->type = typu;
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = rhs;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "AAnimal Copy Assignement called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void		AAnimal::makeSound() const
{
	std::cout << "AAnimal is making a weird sound" << std::endl;
}