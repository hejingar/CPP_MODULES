/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:34:54 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/03 14:39:55 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_value = 0;
}

Fixed::~Fixed( void )
{
	std::cout << "Destroyed" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& fraction)
{

}
Fixed::Fixed(Fixed& fixed)
{
	this->_value = fixed._value;
}