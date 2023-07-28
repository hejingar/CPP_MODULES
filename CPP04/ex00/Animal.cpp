/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:11:06 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 13:32:30 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Hayawan")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string typu)
{
	this->type = typu;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = rhs;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal Copy Assignement called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void		Animal::makeSound() const
{
	std::cout << "Animal is making a weird sound" << std::endl;
}