/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:47:15 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/04 18:28:19 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_value;
		const static int fractBits = 8;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);

		Fixed(Fixed& fixed);
		Fixed&	operator= (const Fixed& fixed);
		//void	operator<< (const Fixed& fixed);
		
		~Fixed();

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

std::ostream&	operator<< ( std::ostream& o, const Fixed& fixed );

#endif