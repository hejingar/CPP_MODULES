/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:45 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 23:48:54 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base
{
  public:
    virtual ~Base();  
};
#endif

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

Base*   aCreator();
Base*   bCreator();
Base*   cCreator();