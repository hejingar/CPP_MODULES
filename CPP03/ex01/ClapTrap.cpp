/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:43:57 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/27 16:11:17 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ct) : _name(ct._name)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ct)
{
	std::cout << "ClapTrap copy assignement called" << std::endl;
	if (this != &ct)
	{
		this->_name = ct._name;
		this->_energyPoints = ct._energyPoints;
		this->_hitPoints = ct._hitPoints;
		this->_attackDamage = ct._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void 	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " <<  target << " causing " << this->_attackDamage << " damage points" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "Too tired or dead" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << this->_name << " is under attack, he looses " << amount << " hit points" << std::endl;
		if ((unsigned int) this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		std::cout << this->_name << " now has " << this->_hitPoints << " hit points" << std::endl;
	}
	else
	{
		std::cout << this->_name << " is already dead" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		int tmp = this->_hitPoints;
		std::cout << this->_name << " is getting repaired, gaining " << amount << " hit points" << std::endl;
		this->_hitPoints += amount;
		if (this->_hitPoints < 0)
		{
			this->_hitPoints = tmp;
			std::cout << "You're healing too much, it's illegal, to punish you we're setting your life back to what it was before" << std::endl;
		}
		std::cout << this->_name << " now has " << this->_hitPoints << " hit points" << std::endl;
		this->_energyPoints -= 1;
	}
	else
	{
		std::cout << "Too tired or dead" << std::endl;
	}
}