/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:05:32 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/08 08:17:31 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
    private:
        //Used int stack, big mistake, keeping it double for the divisions
        std::stack<double> exp;
    public:
        RPN();
        RPN(const RPN& rhs);
        RPN& operator=(const RPN& rhs);
        ~RPN();
        
        void parse(std::string expression);
};

#endif