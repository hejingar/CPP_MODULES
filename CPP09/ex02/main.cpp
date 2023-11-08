/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:42:15 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/08 08:43:18 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac <= 1)
    {
        std::cerr << "Error: Not enough numbers." << std::endl;
        return (1);
    }

    PmergeMe pmm(ac, av);
    return (0);
}