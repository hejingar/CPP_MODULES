/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:22:21 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/10 18:48:32 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_value;
		const static int fractBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);

		Fixed(const Fixed& fixed);
		Fixed&	operator= (const Fixed& fixed);
		
		~Fixed();

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		bool	operator<( const Fixed &fixed ) const;
		bool	operator>( const Fixed &fixed ) const;
		bool	operator<=( const Fixed &fixed ) const;
		bool	operator>=( const Fixed &fixed ) const;
		bool	operator==( const Fixed &fixed ) const;
		bool	operator!=( const Fixed &fixed ) const;
		
		Fixed	operator+( const Fixed &fixed ) const;
		Fixed	operator-( const Fixed &fixed ) const;
		Fixed	operator*( const Fixed &fixed ) const;
		Fixed	operator/( const Fixed &fixed ) const;

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		static Fixed&		min( Fixed& a, Fixed& b );
		static const Fixed&	min( const Fixed& a, const Fixed& b );
		static Fixed&		max( Fixed& a, Fixed& b);
		static const Fixed&	max( const Fixed& a, const Fixed& b);

};

std::ostream&	operator<< ( std::ostream& o, const Fixed& fixed );

#endif