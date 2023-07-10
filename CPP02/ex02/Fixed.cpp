/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:22:10 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/10 18:54:20 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed) : _value(fixed._value)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( const int value ) : _value(value << this->fractBits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _value(roundf(value * (1 << this->fractBits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destroyed" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& fraction)
{
	//std::cout << "Copy assignment operator called" << std::endl;
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
	return (this->_value);
}
//===============Bouleans====================
bool	Fixed::operator<( const Fixed &fixed ) const
{
	if (this->getRawBits() < fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>( const Fixed &fixed ) const
{
	if (this->getRawBits() > fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=( const Fixed &fixed ) const
{
	if (this->getRawBits() <= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=( const Fixed &fixed ) const
{
	if (this->getRawBits() >= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==( const Fixed &fixed ) const
{
	if (this->getRawBits() == fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=( const Fixed &fixed ) const
{
	if (this->getRawBits() != fixed.getRawBits())
		return (true);
	return (false);
}
//===============Mathimatics=================
Fixed	Fixed::operator+( const Fixed &fixed ) const
{
	return (Fixed( this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-( const Fixed &fixed ) const
{
	return (Fixed( this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*( const Fixed &fixed ) const
{
	return (Fixed( this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &fixed ) const
{
	return (Fixed( this->toFloat() / fixed.toFloat()));
}

//===============Incremont===================

Fixed&	Fixed::operator++( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return(*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed fixed = *this;
	++*this;
	return (fixed);
}

Fixed&	Fixed::operator--( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return(*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed fixed = *this;
	--*this;
	return (fixed);
}

//===============Minamax=====================
static Fixed&		min( Fixed& a, Fixed& b )
{
	if (b.getRawBits() > a.getRawBits())
		return (b);
	else
		return (a);
}

static const Fixed&	min( const Fixed& a, const Fixed& b )
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	else
		return (a);
}

static Fixed&		max( Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (b);
}

static const Fixed&	max( const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (b);
}

//======================================================================
std::ostream& operator<< ( std::ostream& o, const Fixed& fixed )
{
	o << fixed.toFloat();
	return (o);
}