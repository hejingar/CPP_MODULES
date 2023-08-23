/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:23:43 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 22:22:52 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>

class Array
{
	private:
		T*				tab;
		unsigned int	sizeTab;
	public:
		Array()
        {
            sizeTab = 0;
	        tab = new T[0];
        }
        
		Array(unsigned int n)
        {
            sizeTab = n;
            tab = new T[n];
            for(unsigned int i = 0; i < n; i++)
            {
                tab[i] = 0;
            }
        }
        
		Array(const Array& rhs)
        {
            this->sizeTab = rhs.size();
            this->tab = new T[rhs.size()];
            for(unsigned int i = 0; i < rhs.size(); i++)
            {
                this->tab[i] = rhs[i];
            }
        }
		~Array()
        {
            delete [] tab;
        }

		Array&			operator=(const Array& rhs)
        {
            delete [] tab;
            sizeTab = rhs.size();
            tab = new T[rhs.size()];
            for (unsigned int i = 0; i < rhs.size(); i++)
            {
                tab[i] = rhs[i];
            }
            return (*this);
        }
        
		T&				operator[](unsigned int index)
        {
            if (index >= this->sizeTab)
                throw std::out_of_range("Out of range exception");
            return (this->tab[index]);
        }
        
		const T&		operator[](unsigned int index) const
        {
            if (index >= this->sizeTab)
                throw std::out_of_range("Out of range exception");
            return (this->tab[index]);
        }
        
		unsigned int	size() const
        {
            return (this->sizeTab);
        }
};

#endif