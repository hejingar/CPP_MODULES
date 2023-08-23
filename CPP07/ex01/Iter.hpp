/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:19:05 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 11:24:16 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename hehe>
void    iter(hehe* array, size_t length, void(*f)(const hehe&))
{
    for (size_t i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

template<typename hehe>
void    printThis(const hehe &c)
{
    std::cout << c << std::endl;
}

#endif