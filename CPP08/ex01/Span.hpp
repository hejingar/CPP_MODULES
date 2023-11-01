/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:10:18 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/01 14:38:39 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span
{
	private:
		typedef std::vector<int>::iterator ITER;
		std::vector<int> _v;
		std::size_t		_s;
		Span();
		
	public:
		Span(unsigned int N);
		Span(const Span& rhs);
		~Span();

		Span&	operator=(const Span& rhs);
		void	addNumber(int n);
		void	addRange(ITER start, ITER end);
		int		shortestSpan();
		int		longestSpan();

	class TooSmallException : public std::exception {
		public:
			virtual const char * what () const throw()
			{
				return "Not enough elements to find span";
			}
	};

	class TooBigException : public std::exception {
		public:
			virtual const char * what () const throw()
			{
				return "Can't add any more numbers";
			}
	};
};

#endif