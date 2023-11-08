/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:57:45 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/08 10:37:27 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char ** av)
{
    populateDeque(ac, av);
    populateList(ac, av);
    std::cout << "Before: ";
    print(lis);
    clock_t start = clock();
    lis = mergeInsertSortList(lis);
    clock_t end = clock();
    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
    //double timeDeque = mergeInsertSortDeque();
    std::cout << "After: ";
    print(lis);
    ///std::cout << "Time to process a range of " << deq.size() << " elements with std::deque container: " << timeDeque << " us" << std::endl;
    std::cout << "Time to process a range of " << lis.size() << " elements with std::list container: " << time << " us" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& rhs)
{
    *this = rhs;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
    (void)rhs;
    return (*this);
}

PmergeMe::~PmergeMe() {}

void    PmergeMe::populateDeque(int ac, char **av)
{
    for (int i = 1; i < ac; ++i)
    {
        int value = atoi(av[i]);
        if (value <= 0)
        {
            std::cerr << "Error: Invalid input value \"" << av[i] << "\"." << std::endl;
			exit(1);
        }
        deq.push_back(value);
    }
}

void    PmergeMe::populateList(int ac, char **av)
{
    for (int i = 1; i < ac; ++i)
    {
        int value = atoi(av[i]);
        if (value <= 0)
        {
            std::cerr << "Error: Invalid input value \"" << av[i] << "\"." << std::endl;
			exit(1);
        }
        lis.push_back(value);
    }
}

template <typename T>
void PmergeMe::print(const T& list)
{
    typename T::const_iterator it;
    for (it = list.begin(); it != list.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// double PmergeMe::mergeInsertSortDeque()
// {
//     std::deque<int>::iterator it1, it2;
    
//     clock_t start = clock();
//     for (it1 = deq.begin() + 1; it1 != deq.end(); ++it1)
//     {
//         int temp = *it1;
//         it2 = it1;
//         while (it2 != deq.begin() && *(--it2) > temp)
//         {
//             *it2 = *(it2--);
//             std::advance(it2, -1);
//         }
//         *it2 = temp;
//     }
//     clock_t end = clock();
//     double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
//     return (time);
// }

std::list<unsigned int> PmergeMe::mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
    std::list<unsigned int> result;

    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            result.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }

    while (!left.empty())
	{
        result.push_back(left.front());
        left.erase(left.begin());
    }

    while (!right.empty())
	{
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return result;
}

std::list<unsigned int> PmergeMe::mergeInsertSortList(std::list<unsigned int> lis)
{

    if (lis.size() <= 1) {
        return lis;
    }
    
    int mid = lis.size() / 2;
	std::list<unsigned int> left;
	std::list<unsigned int> right;

    for (int i = 0; i < mid; i++) {
        left.push_back(lis.front());
        lis.pop_front();
    }
    right = lis;

    left = mergeInsertSortList(left);
    right = mergeInsertSortList(right);

    return mergeLists(left, right);
}