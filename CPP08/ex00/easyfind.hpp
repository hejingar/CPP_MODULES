/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:30:27 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/01 14:31:22 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>

typename T::iterator easyfind(T& container, int toFind)
{
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
        throw std::invalid_argument("Argument invalide");
    return it;
    //if not found it returns the container.end() :/ EDIT : CORRECTED, CHANGE MAIN!
}

#endif