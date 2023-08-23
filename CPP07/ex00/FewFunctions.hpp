/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FewFunctions.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:12:20 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 11:17:22 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FEWFUNCTIONS_HPP
# define FEWFUNCTIONS_HPP

#include <iostream>
#include <string>

template<typename hehe>
void    swap(hehe& a, hehe& b)
{
    hehe s = a;
    a = b;
    b = s;
}

template<typename hehe>
hehe&   min(hehe& a, hehe& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template<typename hehe>
hehe&   max(hehe& a, hehe& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif