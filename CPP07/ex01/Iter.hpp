/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:19:05 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/01 13:47:26 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename hehe>
void    iter(hehe* array, size_t length, void(*f)(const hehe&))
{
    if (array)
    {
        for (size_t i = 0; i < length; i++)
        {
            f(array[i]);
        }
    }
    else
        std::cout << "Stop trying to break my program" << std::endl;
}

//no need for protection because reference and hehe* not hehe**
template<typename hehe>
void    print(const hehe &c)
{
    std::cout << c << std::endl;
}

#endif