/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:21:37 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/01 14:39:48 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int N)
{
	_s = N;
}

Span::Span(const Span& rhs)
{
	*this = rhs;
}

Span&	Span::operator=(const Span& rhs)
{
	if (this == &rhs)
		return (*this);
	this->_s = rhs._s;
	this->_v = rhs._v;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_v.size() == this->_s)
		throw Span::TooBigException();
	
	this->_v.push_back(n);
}

void	Span::addRange(ITER start, ITER end)
{
	if (this->_v.size() + std::distance(start, end) > this->_s)
		throw Span::TooBigException();
	this->_v.insert(this->_v.end(), start, end);	
}

int	Span::shortestSpan()
{
	if (this->_s < 2 || this->_v.size() < 2)
	{
		throw Span::TooSmallException();
	}
	
	std::vector<int> copy(this->_v);
	std::sort(copy.begin(), copy.end());
	int span = *(copy.begin() + 1) - *(copy.begin());
	for (ITER i = copy.begin(); i + 1 != copy.end(); i++)
	{
		if ( *(i + 1) - *(i) < span)
			span = *(i + 1) - *(i);
	}
	return (span);
}

int	Span::longestSpan()
{
	if (this->_s < 2 || this->_v.size() < 2)
		throw Span::TooSmallException();

	std::vector<int> copy(this->_v);
	std::sort(copy.begin(), copy.end());
	int span =  *(copy.end() - 1) - *(copy.begin());
	return (span);
}

