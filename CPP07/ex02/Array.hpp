/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:23:43 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 13:39:24 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>

class Array
{
	private:
		T*				tab;
		unsigned int	size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& rhs);
		~Array();

		Array&			operator=(const Array& rhs);
		unsigned int	size() const;
		T&				operator[](unsigned int index);
		const T&		operator[](unsigned int index) const;
};

#endif