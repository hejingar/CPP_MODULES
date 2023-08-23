/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:29:27 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 13:43:45 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>

Array<T>::Array()
{
	size = 0;
	tab = new T[0];
}

template<typename T>


Array<T>::Array(unsigned int n)
{
	size = n;
	tab = new T[n];
	for(unsigned int i = 0; i < n; i++)
	{
		tab[i] = 0;
	}
}

template<typename T>

Array<T>::Array(const Array& rhs)
{
	this->size = rhs.size();
	this->tab = new T[rhs.size()];
	for(unsigned int i = 0; i < rhs.size(); i++)
	{
		this->tab[i] = rhs[i];
	}
}

template<typename T>

Array<T>::~Array()
{
	delete [] tab;
}

template<typename T>

Array<T>&	Array<T>::operator=(const Array<T>& rhs)
{
	delete [] tab;
	size = rhs.size();
	tab = new T[rhs.size()];
	for (unsigned int i = 0; i < rhs.size(); i++)
	{
		tab[i] = rhs[i];
	}
	return (*this);
}

template<typename T>

T& 			Array<T>::operator[](unsigned int index)
{
	if (index >= this->size)
		throw std::out_of_range("Out of range exception");
	return (this->tab[index]);
}

template<typename T>

const T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= this->size)
		throw std::out_of_range("Out of range exception");
	return (this->tab[index]);
	
}

unsigned int	Array<T>::size() const
{
	return (this->size);
}