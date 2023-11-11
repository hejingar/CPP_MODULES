/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:10:39 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/11 14:16:31 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& rhs)
{
    *this = rhs;
}

RPN& RPN::operator=(const RPN& rhs)
{
    exp = rhs.exp;
    return (*this);
}

RPN::~RPN() {}

void    RPN::parse(std::string expression)
{
    char c;
    for(size_t i = 0; i < expression.length(); i++)
    {
        c = expression[i];
        if (c == ' ')
        {
            continue ;
        }
        else if (isdigit(c))
        {
            int number = c - '0';
            exp.push(number);
        }
        else if (c == '+' && exp.size() >= 2)
        {
            double a = exp.top();
            exp.pop();
            double b = exp.top();
            exp.pop();
            exp.push(a + b);
        }
        else if (c == '-' && exp.size() >= 2)
        {
            double a = exp.top();
            exp.pop();
            double b = exp.top();
            exp.pop();
            //oulala don't switch order here
            exp.push(b - a);
        }
        else if (c == '*' && exp.size() >= 2)
        {
            double a = exp.top();
            exp.pop();
            double b = exp.top();
            exp.pop();
            exp.push(a * b);
        }
		// division par 0 geree automatiquement tend vers +inf
        else if (c == '/' && exp.size() >= 2)
        {
            double a = exp.top();
            exp.pop();
            double b = exp.top();
            exp.pop();
            exp.push(b / a);
        }
        else
        {
            std::cerr << "Wrong operand, aborting..." << std::endl;
            return ;
        }
    }
    if (exp.size() == 1)
    {
        std::cout << exp.top() << std::endl;
        exp.pop();
    }
    else
    {
        std::cout << "Can't calculate the output" << std::endl;
    }
}