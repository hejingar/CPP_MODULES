/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:27:56 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 18:07:38 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = rhs;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat copy assignement called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou miaou mf" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}