/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:43:35 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/08 10:34:28 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>

class PmergeMe
{
    private:
        std::deque<unsigned int> deq;
        std::list<unsigned int> lis;
    public:
        PmergeMe(int ac, char **av);
        PmergeMe(const PmergeMe& rhs);
        PmergeMe& operator=(const PmergeMe& rhs);
        ~PmergeMe();
        
        double  mergeInsertSortDeque();
        std::list<unsigned int> mergeInsertSortList(std::list<unsigned int> lis);
        std::list<unsigned int> mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right);
        void    populateDeque(int ac, char **av);
        void    populateList(int ac, char **av);
        //manage dupes?

        //use this only for display, implement the mergesort for each container as advised in the subject
        template<typename T>
        void    print(const T& list);
};

#endif