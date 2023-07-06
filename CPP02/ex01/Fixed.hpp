/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:47:15 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/06 15:14:56 by ael-youb         ###   ########.fr       */
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

};

std::ostream&	operator<< ( std::ostream& o, const Fixed& fixed );

#endif