/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:47:15 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/04 17:57:58 by ael-youb         ###   ########.fr       */
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
		Fixed(Fixed& fixed);
		Fixed& operator= (const Fixed& fixed);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

#endif