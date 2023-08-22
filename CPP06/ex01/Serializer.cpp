/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:33:13 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 22:40:43 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& rhs)
{
    *this = rhs;
}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& rhs)
{
    (void)rhs;
    return (*this);
}

uintptr_t   Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}