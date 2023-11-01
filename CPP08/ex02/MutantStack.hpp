/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:01:02 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/01 15:10:58 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        MutantStack() {};
        ~MutantStack() {};

        MutantStack( const MutantStack& rhs ) { *this = rhs; }
        MutantStack& operator=(const MutantStack& rhs) {
            if (this != &rhs) {
                std::stack<T>::operator=(rhs);
            }
            return *this;
        }

        iterator begin() 
        { 
            return this->c.begin(); 
        }
        iterator end() 
        { 
            return this->c.end(); 
        }
        const_iterator begin() const 
        { 
            return this->c.begin(); 
        }
        const_iterator end() const 
        { 
            return this->c.end(); 
        }
};


#endif