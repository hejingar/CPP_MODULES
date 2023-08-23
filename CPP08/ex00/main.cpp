/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:30:08 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/23 22:38:35 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> l;
    std::vector<int>::iterator lol;

    for (int i = 0; i < 100; i++)
    {
        l.push_back(i);
    }
    
    lol = easyfind(l, 3);
    if (lol == l.end())
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "iterator: " << *lol << std::endl;
    }


        lol = easyfind(l, -3);
    if (lol == l.end())
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "iterator: " << *lol << std::endl;
    }


    lol = easyfind(l, 35);
    if (lol == l.end())
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "iterator: " << *lol << std::endl;
    }


    lol = easyfind(l, 100);
    if (lol == l.end())
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "iterator: " << *lol << std::endl;
    }

    lol = easyfind(l, 99);
    if (lol == l.end())
    {
        std::cout << "Not found" << std::endl;
    }
    else
    {
        std::cout << "iterator: " << *lol << std::endl;
    }

    return (0);
}