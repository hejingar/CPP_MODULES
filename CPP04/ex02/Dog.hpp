/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:33:24 by ael-youb          #+#    #+#             */
/*   Updated: 2023/07/28 18:06:41 by ael-youb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const Dog& rhs);
		Dog& operator=(const Dog& rhs);
		~Dog();

		void	makeSound() const;
		Brain*	getBrain() const;
};
#endif