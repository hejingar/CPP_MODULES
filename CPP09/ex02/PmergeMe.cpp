/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:57:45 by ael-youb          #+#    #+#             */
/*   Updated: 2023/11/13 09:24:12 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char ** av)
{
	abort = 0;
    clock_t start = clock();
    populateList(ac, av);
	if (!abort)
	{
		lis = mergeInsertSortList(lis);
		clock_t end = clock();
		double timeList = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
		std::cout << "Before: ";
		printAv(av);
		std::cout << "After: ";
		print(lis);
		start = clock();
		populateDeque(ac, av);
		deq = mergeInsertSortDeque(deq);
		end = clock();
		double timeDeque = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque container: " << timeDeque << " us" << std::endl;
		std::cout << "Time to process a range of " << lis.size() << " elements with std::list container: " << timeList << " us" << std::endl;		
	}
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
			abort = 1;
			return ;
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
			abort = 1;
			return ;
        }
        lis.push_back(value);
    }
}

void PmergeMe::printAv(char **av)
{
    for (int i = 1; av[i]; i++)
    {
        std::cout << atoi(av[i]) << " ";
    }
    std::cout << std::endl;
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

std::deque<unsigned int> PmergeMe::mergeDeques(std::deque<unsigned int>& left, std::deque<unsigned int>& right)
{
    std::deque<unsigned int> result;

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

std::deque<unsigned int> PmergeMe::mergeInsertSortDeque(std::deque<unsigned int> deq)
{

    if (deq.size() <= 1) {
        return deq;
    }
    
    int mid = deq.size() / 2;
	std::deque<unsigned int> left;
	std::deque<unsigned int> right;

    for (int i = 0; i < mid; i++) {
        left.push_back(deq.front());
        deq.pop_front();
    }
    right = deq;

    left = mergeInsertSortDeque(left);
    right = mergeInsertSortDeque(right);

    return mergeDeques(left, right);
}