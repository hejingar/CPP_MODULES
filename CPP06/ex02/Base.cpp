/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:54:48 by ael-youb          #+#    #+#             */
/*   Updated: 2023/08/22 23:49:33 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base() {}

Base*   aCreator()
{
    std::cout << "A created" << std::endl;
    return (new A());
}

Base*   bCreator()
{
    std::cout << "B created" << std::endl;
    return (new B());
}

Base*   cCreator()
{
    std::cout << "C created" << std::endl;
    return (new C());
}

Base*   generate(void)
{
    Base*(*functions[3])() = {aCreator, bCreator, cCreator};
    return (functions[rand() % 3]());
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "What is this?" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "What is this?" << std::endl;
            }
            
        }
        
    }
    
}