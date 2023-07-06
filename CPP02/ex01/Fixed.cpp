/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:47:11 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/06 15:17:48 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed) : _value(fixed._value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( const int value ) : _value(value << this->fractBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _value(roundf(value * (1 << this->fractBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destroyed" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& fraction)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fraction)
		this->_value = fraction.getRawBits();
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return((float)this->_value / (float)(1 << this->fractBits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->fractBits);
}
void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

std::ostream& operator<< ( std::ostream& o, const Fixed& fixed )
{
	o << fixed.toFloat();
	return (o);
}