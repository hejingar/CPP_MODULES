/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:18:39 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/12 12:57:42 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB :" << this->_name << " destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    }
	else
	{
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}