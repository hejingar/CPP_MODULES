/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:00:33 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/02 17:01:35 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << this->_type << " has been destroyed" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}