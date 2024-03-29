/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:04:28 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/08 08:43:28 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "./RPN \"votre expression a calculer\"" << std::endl;
        return (1);
    }
    
    std::string expression = av[1];
    RPN rpn;
    rpn.parse(expression);
    return (0);
}